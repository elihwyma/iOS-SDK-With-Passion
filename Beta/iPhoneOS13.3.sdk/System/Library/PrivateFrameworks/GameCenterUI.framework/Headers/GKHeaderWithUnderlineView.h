/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSMutableDictionary, UIImageView, UIView;

@interface GKHeaderWithUnderlineView : UICollectionReusableView

{
    _Bool _underlineHasRightMargin;
    _Bool _isPinned;
    _Bool _didSetupConstraints;
    UIView *_underlineView;
    UIImageView *_shadowView;
    NSMutableDictionary *_metrics;
    NSArray *_gutterConstraints;
    double _leadingMargin;
    double _trailingMargin;
    UIView *_pinnedBackdropView;
}

@property (nonatomic) _Bool isPinned;
@property (retain, nonatomic) UIView *pinnedBackdropView;
@property (nonatomic) _Bool didSetupConstraints;
@property (retain, nonatomic) UIView *underlineView;
@property (retain, nonatomic) UIImageView *shadowView;
@property (nonatomic) _Bool underlineHasRightMargin;
@property (retain, nonatomic) NSMutableDictionary *metrics;
@property (retain, nonatomic) NSArray *gutterConstraints;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

+ (void)initialize;
+ (_Bool)requiresConstraintBasedLayout;
+ (id)phoneMetrics;
+ (id)padMetrics;
+ (id)macMetrics;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)drawsUnderline;
- (_Bool)allowsVibrancy;
- (void)updateGutterConstraints;
- (void)establishConstraints;
- (void)pinningStateChangedTo:(_Bool)arg1;

@end
