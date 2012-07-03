/* +---------------------------------------------------------------------------+
   |          The Mobile Robot Programming Toolkit (MRPT) C++ library          |
   |                                                                           |
   |                       http://www.mrpt.org/                                |
   |                                                                           |
   |   Copyright (C) 2005-2012  University of Malaga                           |
   |                                                                           |
   |    This software was written by the Machine Perception and Intelligent    |
   |      Robotics Lab, University of Malaga (Spain).                          |
   |    Contact: Jose-Luis Blanco  <jlblanco@ctima.uma.es>                     |
   |                                                                           |
   |  This file is part of the MRPT project.                                   |
   |                                                                           |
   |     MRPT is free software: you can redistribute it and/or modify          |
   |     it under the terms of the GNU General Public License as published by  |
   |     the Free Software Foundation, either version 3 of the License, or     |
   |     (at your option) any later version.                                   |
   |                                                                           |
   |   MRPT is distributed in the hope that it will be useful,                 |
   |     but WITHOUT ANY WARRANTY; without even the implied warranty of        |
   |     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         |
   |     GNU General Public License for more details.                          |
   |                                                                           |
   |     You should have received a copy of the GNU General Public License     |
   |     along with MRPT.  If not, see <http://www.gnu.org/licenses/>.         |
   |                                                                           |
   +---------------------------------------------------------------------------+ */

#ifndef HOLONOMIC_NAVIGATOR_DEMOMAIN_H
#define HOLONOMIC_NAVIGATOR_DEMOMAIN_H

//(*Headers(holonomic_navigator_demoFrame)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/radiobox.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/things/toggle.h>
#include "MyGLCanvas.h"
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class holonomic_navigator_demoFrame: public wxFrame
{
    public:

        holonomic_navigator_demoFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~holonomic_navigator_demoFrame();

    private:

        //(*Handlers(holonomic_navigator_demoFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(holonomic_navigator_demoFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_RADIOBOX1;
        static const long ID_TEXTCTRL1;
        static const long ID_PANEL1;
        static const long ID_PANEL2;
        static const long ID_NOTEBOOK1;
        static const long ID_XY_GLCANVAS;
        static const long ID_CUSTOM1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(holonomic_navigator_demoFrame)
        wxCustomButton* btnStop;
        wxNotebook* Notebook1;
        wxRadioBox* rbHoloMethod;
        wxCustomButton* Button2;
        wxCustomButton* btnStart;
        wxTextCtrl* edHoloParams;
        wxCustomButton* Button1;
        wxCustomButton* btnLoadMap;
        wxCustomButton* btnQuit;
        wxPanel* Panel1;
        wxStatusBar* StatusBar1;
        wxCustomButton* btnHelp;
        wxPanel* Panel2;
        CMyGLCanvas* m_plotScan;
        CMyGLCanvas* m_plot3D;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // HOLONOMIC_NAVIGATOR_DEMOMAIN_H
