/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUValueFilter.h>

@class NSArray;

@interface PUGroupValueFilter : PUValueFilter

{
    NSArray *_filters;
}

@property (copy, nonatomic) NSArray *filters;

- (void)setInputValue:(double)arg1;
- (double)outputValue;

@end
