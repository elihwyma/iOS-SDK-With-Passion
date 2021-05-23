/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarSystemNavigationItemView.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView

{
    UISystemNavigationAction *_systemNavigationAction;
    NSString *_destinationText;
}

@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction;
@property (retain, nonatomic) NSString *destinationText;

- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)extraRightPadding;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (long long)labelLineBreakMode;
- (void)userDidActivateButton:(id)arg1;

@end
