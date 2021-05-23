/*
 Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

#import <Foundation/NSData.h>

@interface NSData (CUTAdditions)

- (id)_CUTDecompressData;
- (id)_CUTStringFromBaseData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTCopyGzippedData;

@end
