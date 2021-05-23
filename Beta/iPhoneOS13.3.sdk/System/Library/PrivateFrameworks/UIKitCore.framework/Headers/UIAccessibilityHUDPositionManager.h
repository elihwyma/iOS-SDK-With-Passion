/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDPositionManager : NSObject

{
    NSMapTable *_managedHUDs;
    struct CGRect _keyboardAvoidanceArea;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(struct CGRect)arg3;
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect)arg1;
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2;
- (void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2;
- (void)stopManagingPositionOfHUD:(id)arg1;

@end
