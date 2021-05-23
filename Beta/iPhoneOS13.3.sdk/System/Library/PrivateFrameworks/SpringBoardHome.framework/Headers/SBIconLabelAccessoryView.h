/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface SBIconLabelAccessoryView : UIView

{
    UIImage *_baseImage;
}

@property (retain, nonatomic) UIImage *baseImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasBaseline;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) struct UIEdgeInsets alignmentRectInsets;

+ (id)labelAccessorySystemImageName;
+ (long long)labelAccessorySystemImageScale;

- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;

@end
