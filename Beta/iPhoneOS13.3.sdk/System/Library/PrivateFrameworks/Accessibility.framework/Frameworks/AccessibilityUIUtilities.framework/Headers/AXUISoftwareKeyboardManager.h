/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol AXUISoftwareKeyboardManagerDelegate;

@interface AXUISoftwareKeyboardManager : NSObject

{
    NSMutableSet *_reasonsToDisableSoftwareKeyboard;
    NSMutableSet *_reasonsToEnableSoftwareKeyboard;
    id <AXUISoftwareKeyboardManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <AXUISoftwareKeyboardManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)updateKeyboardHardwareState;
- (void)_wst_setIsHardwareKeyboardAttached:(id)arg1;
- (void)_setIsHardwareKeyboardAttached:(_Bool)arg1;
- (void)_updateHardwareKeyboardState;
- (_Bool)isHardwareKeyboardAttached;
- (void)_overrideSetHardwareKeyboardAttached:(_Bool)arg1;
- (void)addReasonToEnableSoftwareKeyboard:(id)arg1;
- (void)removeReasonToEnableSoftwareKeyboard:(id)arg1;
- (void)addReasonToDisableSoftwareKeyboard:(id)arg1;
- (void)removeReasonToDisableSoftwareKeyboard:(id)arg1;

@end
