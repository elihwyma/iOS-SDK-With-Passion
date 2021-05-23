/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SBKAlertDialog : NSObject

{
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;
    CDUnknownBlockType _completionHandler;
    NSString *_acceptButtonTitle;
}

@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSString *cancelButtonTitle;
@property (copy) NSString *acceptButtonTitle;
@property (copy) CDUnknownBlockType completionHandler;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_runAsUIAlertView;
- (void)_runAsCFUserNotificationDisplayAlert;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4;

@end
