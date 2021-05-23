/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MCDetailsDescriptionView : UIView

{
    NSArray *_information;
    NSMutableArray *_labels;
    NSMutableArray *_fields;
    struct CGSize *_sizes;
    unsigned long long _sizesCount;
    double _idealHeight;
    _Bool _usesDynamicAlignment;
    double _labelMaxWidth;
}

- (void)dealloc;
- (id)_labelFont;
- (void)drawRect:(struct CGRect)arg1;
- (id)_valueFont;
- (void)setUsesDynamicAlignment:(_Bool)arg1;
- (double)heightForTableView;
- (void)_calculateHeightsForFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;

@end
