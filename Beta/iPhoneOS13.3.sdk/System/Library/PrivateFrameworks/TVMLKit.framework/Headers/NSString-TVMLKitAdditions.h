/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSString.h>

@interface NSString (TVMLKitAdditions)

+ (id)tv_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tvs_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;

- (id)tv_filenameSafeString;
- (id)tv_MD5String;
- (id)tv_SHA256String;

@end
