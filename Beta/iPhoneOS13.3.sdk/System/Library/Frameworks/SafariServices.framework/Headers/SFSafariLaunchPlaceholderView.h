/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSString, UINavigationBar, UIToolbar;

__attribute__((visibility("hidden")))
@interface SFSafariLaunchPlaceholderView : UIView

{
    UINavigationBar *_topNavigationBar;
    UIToolbar *_bottomToolbar;
    double _topLayoutGuideInset;
}

@property (nonatomic) double topLayoutGuideInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)positionForBar:(id)arg1;
- (void)updateBarTintColor:(id)arg1;

@end
