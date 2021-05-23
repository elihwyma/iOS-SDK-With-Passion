/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIContextCache : NSObject

+ (void)resetStatistics;
+ (long long)peakNonVolatileSize;
+ (long long)currentNonVolatileSize;
+ (long long)countAllocated;

@end
