/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (FezAdditions)

@property (nonatomic, readonly) NSData *SHA1Data;
@property (nonatomic, readonly) NSString *SHA1HexString;
@property (nonatomic, readonly) NSData *SHA256Data;

+ (id)__imDataWithHexString:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;

- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;
- (id)_FTDecompressData;
- (id)__imHexString;
- (id)_FTOptionallyDecompressData;

@end
