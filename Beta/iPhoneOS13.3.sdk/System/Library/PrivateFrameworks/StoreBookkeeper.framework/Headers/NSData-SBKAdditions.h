/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSData.h>

@interface NSData (SBKAdditions)

+ (id)SBKStringFromDigestData:(id)arg1;
+ (id)SBKStringByMD5HashingString:(id)arg1;

- (id)_SBKDataByInflatingWithNoZipHeader;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned long long)arg1;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByDeflatingWithGZip;

@end
