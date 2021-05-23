/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBaseComposeController.h>

@class GKComposeHeaderWithStaticRecipients, NSArray, NSString;

@interface GKSimpleComposeController : GKBaseComposeController

{
    GKComposeHeaderWithStaticRecipients *_toField;
    NSString *_defaultMessage;
    NSArray *_players;
    CDUnknownBlockType _doneHandler;
}

@property (retain, nonatomic) GKComposeHeaderWithStaticRecipients *toField;
@property (retain, nonatomic) NSString *defaultMessage;
@property (retain, nonatomic) NSArray *players;
@property (copy, nonatomic) CDUnknownBlockType doneHandler;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)donePressed;
- (void)setupSendButton;
- (void)pushOntoNavigationController:(id)arg1 withDoneHandler:(CDUnknownBlockType)arg2;

@end
