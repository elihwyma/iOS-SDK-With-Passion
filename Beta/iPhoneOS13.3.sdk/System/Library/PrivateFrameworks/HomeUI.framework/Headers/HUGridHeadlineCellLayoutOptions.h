/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions

{
    _Bool _editing;
    double _minimumFontSize;
    double _editingBackgroundHeight;
    double _headlineBaselineOffset;
    long long _viewSizeSubclass;
    double _viewWidth;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
}

@property (nonatomic, readonly) long long viewSizeSubclass;
@property (nonatomic, readonly) double viewWidth;
@property (nonatomic, readonly) double containerLeadingMargin;
@property (nonatomic, readonly) double containerTrailingMargin;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) double editingBackgroundHeight;
@property (nonatomic) double headlineBaselineOffset;
@property (nonatomic, readonly) double editingBackgroundMinimumWidth;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2 viewWidth:(double)arg3 navigationBarBottomInset:(double)arg4 containerLeadingMargin:(double)arg5 containerTrailingMargin:(double)arg6;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)cellInnerMargin;

@end
