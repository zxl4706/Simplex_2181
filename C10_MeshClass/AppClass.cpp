#include "AppClass.h"

void Application::InitVariables(void)
{

	for (int x = 0; x < 48; x++)
	{
		//Make MyMesh object
		MyMesh* m_pMesh2 = new MyMesh();
		m_pMesh2->GenerateCube(1.0f, C_BLACK);
		m_boxList.push_back(m_pMesh2);
	}
}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();
}
void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	//m_pMesh->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), ToMatrix4(m_qArcBall));

	int indexCount = 0;

	for (int x = 0; x < 3; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(-4.0f + m_translation, 0.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 2; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(-3.0f + m_translation, 2.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 5; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(-2.0f + m_translation, 0.0f + x, 0.0f)));
		indexCount++;
	}

	m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(-2.0f + m_translation, 6.0f, 0.0f)));
	indexCount++;

	for (int x = 0; x < 2; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(-1.0f + m_translation, 1.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 2; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(-1.0f + m_translation, 4.0f + x, 0.0f)));
		indexCount++;
	}

	m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(-1.0f + m_translation, -1.0f, 0.0f)));
	indexCount++;

	for (int x = 0; x < 4; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(0.0f + m_translation, 1.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 4; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(1.0f + m_translation, 1.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 4; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(2.0f + m_translation, 1.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 2; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(3.0f + m_translation, 1.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 2; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(3.0f + m_translation, 4.0f + x, 0.0f)));
		indexCount++;
	}

	m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(3.0f + m_translation, -1.0f, 0.0f)));
	indexCount++;

	m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(0.0f + m_translation, -1.0f, 0.0f)));
	indexCount++;

	m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(2.0f + m_translation, -1.0f, 0.0f)));
	indexCount++;

	m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(3.0f + m_translation, -1.0f, 0.0f)));
	indexCount++;

	for (int x = 0; x < 5; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(4.0f + m_translation, 0.0f + x, 0.0f)));
		indexCount++;
	}

	m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(4.0f + m_translation, 6.0f, 0.0f)));
	indexCount++;

	for (int x = 0; x < 3; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(6.0f + m_translation, 0.0f + x, 0.0f)));
		indexCount++;
	}

	for (int x = 0; x < 2; x++)
	{
		m_boxList[indexCount]->Render(m_pCameraMngr->GetProjectionMatrix(), m_pCameraMngr->GetViewMatrix(), glm::translate(vector3(5.0f + m_translation, 2.0f + x, 0.0f)));
		indexCount++;
	}

	m_translation += 0.1f;
		
	// draw a skybox
	m_pMeshMngr->AddSkyboxToRenderList();
	
	//render list call
	m_uRenderCallCount = m_pMeshMngr->Render();

	//clear the render list
	m_pMeshMngr->ClearRenderList();
	
	//draw gui
	DrawGUI();
	
	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	if (m_pMesh != nullptr)
	{
		delete m_pMesh;
		m_pMesh = nullptr;
	}
	SafeDelete(m_pMesh1);
	//release GUI
	ShutdownGUI();
}