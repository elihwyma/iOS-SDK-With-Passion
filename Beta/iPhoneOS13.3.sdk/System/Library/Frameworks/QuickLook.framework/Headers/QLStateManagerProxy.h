/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@protocol QLPreviewControllerStateProtocolHostOnly;

__attribute__((visibility("hidden")))
@interface QLStateManagerProxy : NSObject

{
    id <QLPreviewControllerStateProtocolHostOnly> _stateManager;
}

@property (weak) id <QLPreviewControllerStateProtocolHostOnly> stateManager;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dropMethod;

@end
