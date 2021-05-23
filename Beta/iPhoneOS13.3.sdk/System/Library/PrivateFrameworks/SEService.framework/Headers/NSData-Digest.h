/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

#import <NSData.h>

@interface NSData (Digest)

+ (id)dataWithDERItem:(CDStruct_b9c9288f)arg1;

- (id)sha1;
- (id)sha256;
- (id)asHexString;
- (CDStruct_b9c9288f)DERItem;

@end
