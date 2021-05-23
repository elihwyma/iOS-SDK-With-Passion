/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVInfoCellView : UIView

{
    _Bool _headerOnLeading;
    UIView *_headerContentView;
    NSArray *_dataViews;
    double _headerWidth;
    double _headerMaxWidth;
    double _headerMinWidth;
    double _normalizedHeaderWidth;
    struct UIEdgeInsets _headerMargin;
}

@property (retain, nonatomic) UIView *headerContentView;
@property (retain, nonatomic) NSArray *dataViews;
@property (nonatomic) _Bool headerOnLeading;
@property (nonatomic) double headerWidth;
@property (nonatomic) double headerMaxWidth;
@property (nonatomic) double headerMinWidth;
@property (nonatomic) struct UIEdgeInsets headerMargin;
@property (nonatomic) double normalizedHeaderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 withHeaderWidth:(double)arg2;
- (double)minimumHeaderWidth;

@end
