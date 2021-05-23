/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPUtils : NSObject

+ (double)getHostTime;
+ (unsigned long long)getHostTimeInNanos;
+ (id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2;
+ (void)freeVImageBuffer:(struct vImage_Buffer *)arg1;
+ (long long)parseExifTimestamp:(id)arg1;

@end
