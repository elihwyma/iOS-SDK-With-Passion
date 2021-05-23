/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSData.h>

@interface NSData (HPDAdditions)

- (id)hpd_decompressedDataUsingAlgorithm:(int)arg1;
- (id)hpd_dataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
- (id)hpd_compressedDataUsingAlgorithm:(int)arg1;

@end
