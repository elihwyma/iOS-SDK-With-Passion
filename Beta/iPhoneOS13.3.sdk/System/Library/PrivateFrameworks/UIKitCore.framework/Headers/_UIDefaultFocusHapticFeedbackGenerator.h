/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CARInputDeviceTouchpad, CARSessionStatus, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefaultFocusHapticFeedbackGenerator : NSObject

{
    CARSessionStatus *_sessionStatus;
    CARInputDeviceTouchpad *_currentTouchpad;
    unsigned long long _currentSenderID;
}

@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (retain, nonatomic) CARInputDeviceTouchpad *currentTouchpad;
@property (nonatomic) unsigned long long currentSenderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)performHapticFeedbackForFocusUpdateInContext:(id)arg1;

@end
