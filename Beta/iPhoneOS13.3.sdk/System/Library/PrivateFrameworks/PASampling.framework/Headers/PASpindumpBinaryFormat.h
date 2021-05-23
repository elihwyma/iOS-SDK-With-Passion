/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PASpindumpBinaryFormat : NSObject

+ (id)sampleStoreForSpindumpFile:(const char *)arg1;
+ (id)binaryFormatDataWithSampleStore:(id)arg1;
+ (_Bool)saveBinaryFormatOfSampleStore:(id)arg1 toStream:(struct __sFILE *)arg2;

@end
