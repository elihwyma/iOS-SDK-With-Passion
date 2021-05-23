/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UIDragSourceLiftEffect : NSObject

{
    NSMapTable *_liftOperationByContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2;
- (void)_setInteractionEffectsLifted:(_Bool)arg1 withOperation:(id)arg2;
- (void)_installInteractionPlattersForOperation:(id)arg1;
- (void)_uninstallInteractionPlattersForOperation:(id)arg1;

@end
