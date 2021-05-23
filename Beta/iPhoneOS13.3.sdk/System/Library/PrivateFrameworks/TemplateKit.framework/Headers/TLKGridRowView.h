/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSMutableArray, TLKGridLayoutManager, TLKTableRow;

@interface TLKGridRowView

{
    _Bool _needsSizingPass;
    TLKGridLayoutManager *_manager;
    TLKTableRow *_tableRow;
    NSMutableArray *_labels;
    NSMutableArray *_imageViews;
    NSMutableArray *_currentListOfViews;
    unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
    unsigned long long _indexOfFirstTrailingColumn;
}

@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NSMutableArray *currentListOfViews;
@property (nonatomic) unsigned long long indexOfFirstCenteredColumnForForcedCentering;
@property (nonatomic) unsigned long long indexOfFirstTrailingColumn;
@property (nonatomic) _Bool needsSizingPass;
@property (retain, nonatomic) TLKGridLayoutManager *manager;
@property (retain, nonatomic) TLKTableRow *tableRow;

+ (void)updateLabel:(id)arg1 withRichText:(id)arg2 alignment:(long long)arg3;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)observedPropertiesChanged;
- (void)resetStateOfAllViews;
- (void)generateLabelsAndImagesIfNecessary;

@end
