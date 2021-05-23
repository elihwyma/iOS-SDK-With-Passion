/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTextItemView : UIView

{
    NSArray *_labels;
}

@property (copy, nonatomic) NSArray *labels;

- (void)setTextColor:(id)arg1;
- (id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4;

@end
