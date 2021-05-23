/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSString.h>

@interface NSString (AuthKit)

+ (id)ak_base64EncodedJsonFromObject:(id)arg1;

- (id)ak_urlEncoded;
- (id)ak_SHA256;
- (id)ak_SHA256String;
- (id)ak_truncatedCopy;

@end
