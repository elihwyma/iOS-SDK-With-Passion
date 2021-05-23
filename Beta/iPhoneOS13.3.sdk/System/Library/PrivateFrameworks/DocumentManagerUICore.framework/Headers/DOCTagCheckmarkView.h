/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class NSString;

@interface DOCTagCheckmarkView : UIView

{
    long long _tagColor;
    struct CGSize _checkmarkView;
}

@property (nonatomic) struct CGSize checkmarkView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long tagColor;

+ (id)checkmarkImage;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateBackgroundColor;
- (void)updateLayoutOfLayers;

@end
