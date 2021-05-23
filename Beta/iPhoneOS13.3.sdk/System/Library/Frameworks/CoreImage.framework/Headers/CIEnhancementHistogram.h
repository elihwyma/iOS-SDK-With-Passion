/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIEnhancementHistogram : NSObject

{
    double hist[256];
}

+ (id)histogramFromData:(const double *)arg1;
+ (id)histogramFromFloatData:(const float *)arg1;
+ (id)histogramFromDoubleData:(const double *)arg1;

- (const double *)values;

@end
