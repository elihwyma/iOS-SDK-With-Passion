/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView

{
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    struct CGSize *_sizes;
}

- (void)dealloc;
- (void)layoutSubviews;
- (id)_labelFont;
- (void)drawRect:(struct CGRect)arg1;
- (double)rowHeight;
- (id)_valueFont;
- (void)setLabelsAndValues:(id)arg1;
- (void)_recalculateIdealHeight;

@end
