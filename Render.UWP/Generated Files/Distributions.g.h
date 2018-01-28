﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "XamlBindingInfo.g.h"

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class CommandBar;
                ref class AppBarButton;
                ref class TextBlock;
            }
        }
    }
}
namespace RenderEngine {
    namespace Controls {
        ref class FinancialChart;
    }
}

namespace RenderEngine
{
    namespace Views
    {
        [::Windows::Foundation::Metadata::WebHostHidden]
        partial ref class Distributions : public ::Windows::UI::Xaml::Controls::Page, 
            public ::Windows::UI::Xaml::Markup::IComponentConnector,
            public ::Windows::UI::Xaml::Markup::IComponentConnector2
        {
        public:
            void InitializeComponent();
            virtual void Connect(int connectionId, ::Platform::Object^ target);
            virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
        
        private:
            void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
            void DisconnectUnloadedObject(int connectionId);
        
        private:
            bool _contentLoaded;
        
            class Distributions_obj1_Bindings;
        
            ::XamlBindingInfo::XamlBindings^ Bindings;
            private: ::Windows::UI::Xaml::Controls::Grid^ LayoutRoot;
            private: ::RenderEngine::Controls::FinancialChart^ display;
            private: ::Windows::UI::Xaml::Controls::CommandBar^ cmdbar;
            private: ::Windows::UI::Xaml::Controls::AppBarButton^ appbarbutton;
            private: ::Windows::UI::Xaml::Controls::TextBlock^ title;
        };
    }
}

