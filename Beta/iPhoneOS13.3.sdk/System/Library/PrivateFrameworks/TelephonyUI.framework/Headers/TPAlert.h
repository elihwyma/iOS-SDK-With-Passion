/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h>

@interface TPAlert : NSObject

{
    CDUnknownBlockType _completion;
    struct __CFUserNotification *_userNotification;
}

@property (nonatomic) struct __CFUserNotification *userNotification;
@property (copy, nonatomic) CDUnknownBlockType completion;

- (void)dealloc;
- (id)title;
- (id)message;
- (void)show;
- (id)defaultButtonTitle;
- (id)alternateButtonTitle;
- (id)otherButtonTitle;
- (void)defaultResponse;
- (void)otherResponse;
- (void)alternateResponse;
- (void)showOnViewController:(id)arg1;

@end
