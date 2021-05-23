/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject

{
    struct AugmentableInspectorController *_inspectorController;
    struct RetainPtr<RWIProtocolConfiguration> _configuration;
    struct unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient>> _inspectorControllerClient;
}

@property (nonatomic, readonly) RWIProtocolConfiguration *configuration;
@property (nonatomic, readonly) _Bool connected;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)inspectorControllerDestroyed;

@end
