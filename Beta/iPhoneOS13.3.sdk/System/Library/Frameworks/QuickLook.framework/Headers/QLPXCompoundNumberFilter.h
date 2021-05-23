/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPXNumberFilter.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface QLPXCompoundNumberFilter : QLPXNumberFilter

{
    NSArray *_filters;
}

@property (copy, nonatomic) NSArray *filters;

- (double)updatedOutput;

@end
