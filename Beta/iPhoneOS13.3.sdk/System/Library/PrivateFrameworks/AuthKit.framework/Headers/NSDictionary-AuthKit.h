/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (AuthKit)

+ (id)ak_dictionaryWithResponseData:(id)arg1;
+ (id)ak_jsonDictionaryWithResponseData:(id)arg1;

- (id)ak_redactedCopy;
- (id)_ak_truncatedTokensCopy;
- (id)ak_mapObjects:(CDUnknownBlockType)arg1;
- (id)ak_mapObjectsNullable:(CDUnknownBlockType)arg1;
- (id)ak_urlQueryString;
- (id)ak_toJSONString;

@end
