/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIActivity.h>

@class NSString, UIImage, UIViewController;

@protocol SUActivityDelegate;

@interface SUActivity : UIActivity

{
    id <SUActivityDelegate> _delegate;
    UIImage *_suActivityImage;
    NSString *_suActivityTitle;
    NSString *_suActivityType;
    UIViewController *_suActivityViewController;
}

@property (weak, nonatomic) id <SUActivityDelegate> ITunesStoreDelegate;

- (void)dealloc;
- (id)activityType;
- (void)setActivityType:(id)arg1;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (void)performActivity;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setActivityImage:(id)arg1;

@end
