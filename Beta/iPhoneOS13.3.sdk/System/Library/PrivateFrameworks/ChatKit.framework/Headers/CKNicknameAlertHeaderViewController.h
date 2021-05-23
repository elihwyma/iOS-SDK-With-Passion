/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class IMNickname;

@interface CKNicknameAlertHeaderViewController : UIViewController

{
    IMNickname *_nickname;
}

@property (retain, nonatomic) IMNickname *nickname;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (struct CGSize)_expectedSize;
- (id)initWithNickname:(id)arg1;

@end
