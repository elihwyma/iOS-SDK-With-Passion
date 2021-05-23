/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIAlertView.h>

@class NSString;

@interface GKLoginAlertView : UIAlertView

{
    NSString *_username;
    unsigned long long _passwordFieldIndex;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2;
- (void)_updateFrameForDisplay;

@end
