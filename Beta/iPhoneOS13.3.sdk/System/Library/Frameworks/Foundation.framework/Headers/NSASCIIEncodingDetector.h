/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSSingleByteEncodingDetector.h>

__attribute__((visibility("hidden")))
@interface NSASCIIEncodingDetector : NSSingleByteEncodingDetector

- (unsigned long long)recognizeString:(const char *)arg1 withDataLength:(unsigned long long)arg2 intoBuffer:(id)arg3;
- (double)confidence;

@end
