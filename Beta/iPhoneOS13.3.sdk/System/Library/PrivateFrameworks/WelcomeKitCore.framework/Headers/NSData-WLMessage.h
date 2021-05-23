/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSData.h>

@interface NSData (WLMessage)

+ (id)wl_hmacSHA256DataForData:(id)arg1 key:(id)arg2;
+ (id)wl_dataFromHexEncodedString:(id)arg1;
+ (id)wl_lengthPrefixedBlobSequenceFromDataArray:(id)arg1;
+ (id)wl_dataFromHexEncodedData:(id)arg1;

- (id)wl_subdataWithRangeExcludingTrailingCrnl:(struct _NSRange)arg1;
- (id)wl_hexEncodedString;
- (_Bool)wl_blobIsComplete;
- (id)wl_lengthPrefixedBlob;
- (id)wl_dataFromLengthPrefixedBlob;
- (id)wl_arrayOfDataFromLengthPrefixedBlobSequenceWithExpectedCount:(unsigned long long)arg1;
- (id)wl_utf8String;
- (id)wl_hexEncodedData;

@end
