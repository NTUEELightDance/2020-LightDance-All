const Layout_Config = {
    content: [
    {
        type: 'column',
        isClosable: false,
        content:[
            {
            type: 'column',
            content:[
                {
                    type: 'component',
                    height : 20,
                    isClosable : false,
                    componentName: 'timeline_Component',
                    title : 'Timeline',
                    componentState: { label: 'timeline_Component' }
                },
                {
                    type: 'row',
                    content:[
                        {
                            type: 'component',
                            componentName: 'display_Component',
                            title : 'Simulator',
                            isClosable : false,
                            componentState: { label: 'display_Component' }
                        },
                        {
                            type: 'component',
                            width : 24.978317432784035,
                            componentName: 'editor_Component',
                            title : 'editor',
                            isClosable : false,
                            componentState: { label: 'editor_Component' }
                        },
                        {
                            type: 'component',
                            width : 18,
                            componentName: 'presets_Component',
                            title : 'Presets',
                            isClosable : false,
                            componentState: { label: 'presets_Component' }
                        }
                    ]
                }
            ]
        },
        
        {
            type: 'component',
            id:"id_command_Component",
            width : 25.644599303135884,
            height : 20,
            title : 'Command',
            componentName: 'command_Component',
            componentState: { label: 'command_Component' }
        }
        ]
    }
]
};

export default Layout_Config