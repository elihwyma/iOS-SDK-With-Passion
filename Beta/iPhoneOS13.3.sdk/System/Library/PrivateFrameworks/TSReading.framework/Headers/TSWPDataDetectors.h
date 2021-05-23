/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPDataDetectors : NSObject

+ (void)registerDataDetectorClass:(Class)arg1;
+ (id)calculateScanRanges:(id)arg1 changedRange:(struct _NSRange)arg2;
+ (id)scanString:(id)arg1 scanRanges:(id)arg2;

@end
