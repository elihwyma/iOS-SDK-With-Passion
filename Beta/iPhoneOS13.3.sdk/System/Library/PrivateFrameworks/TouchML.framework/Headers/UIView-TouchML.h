/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <UIView.h>

@class NSArray, NSDictionary, NSString, TMLContext;

@interface UIView (TouchML)

@property (copy, nonatomic) NSArray *subviews;
@property (copy, nonatomic) NSArray *constraints;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (copy, nonatomic) NSArray *layoutGuides;
@property (nonatomic, readonly) TMLContext *tmlContext;
@property (copy, nonatomic) NSDictionary *tmlObjects;
@property (nonatomic, readonly) NSString *tmlViewPath;

+ (id)tmlLoadViewFromPath:(id)arg1;
+ (void)tmlLoadCategory;

- (void)tmlLoadViewFromPath:(id)arg1;
- (void)tmlDidMoveToWindow;
- (void)tmlTraitCollectionDidChange:(id)arg1;
- (_Bool)tmlAccessibilityActivate;
- (void)tmlAccessibilityDecrement;
- (void)tmlAccessibilityIncrement;
- (void)_tmlUnloadContext;
- (void)_tmlEnsureContext:(CDUnknownBlockType)arg1;
- (void)tmlLoadView;
- (void)tmlLoadView:(id)arg1;
- (void)tmlLoadReusableView:(id)arg1;

@end
