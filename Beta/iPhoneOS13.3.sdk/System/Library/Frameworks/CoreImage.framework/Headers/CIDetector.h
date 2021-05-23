/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIDetector : NSObject

+ (id)detectorOfType:(id)arg1 context:(id)arg2 options:(id)arg3;

- (id)init;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1;

@end
