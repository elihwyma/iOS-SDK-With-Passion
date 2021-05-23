/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class CKNicknamePreviewView;

__attribute__((visibility("hidden")))
@interface CKNicknameIntroViewController : OBWelcomeController

{
    CKNicknamePreviewView *_nicknamePreviewView;
}

@property (retain, nonatomic) CKNicknamePreviewView *nicknamePreviewView;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)_contentViewHeight;

@end
