/*
 Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

#import <Foundation/NSData.h>

@interface NSData (BUAdditions)

+ (id)bu_dataFromHexString:(id)arg1;

- (id)bu_md5;
- (id)bu_md5UpperCase;
- (id)bu_sha1;
- (id)bu_sha256;
- (id)bu_sha384;
- (id)bu_dataURIString;
- (id)bu_hexString;

@end
