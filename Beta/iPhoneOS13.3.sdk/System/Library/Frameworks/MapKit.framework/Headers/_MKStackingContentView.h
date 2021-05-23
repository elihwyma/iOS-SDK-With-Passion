/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKUIViewControllerRootView.h>

@class NSLayoutConstraint, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _MKStackingContentView : _MKUIViewControllerRootView

{
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_middleConstraint;
    NSLayoutConstraint *_bottomConstraint;
    UIView *_topView;
    UIView *_bottomView;
}

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic, readonly) NSLayoutConstraint *bottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateConstraints;
- (id)initWithViewController:(id)arg1;
- (id)vibrancyGroupName;

@end
