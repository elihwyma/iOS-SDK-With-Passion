/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSArray.h>

@interface NSArray (AuthKit)

+ (id)ak_arrayWithResponseData:(id)arg1;
+ (id)ak_arrayWithJSONResponseData:(id)arg1;

- (id)ak_map:(CDUnknownBlockType)arg1;
- (id)ak_firstObjectMatchingFilter:(CDUnknownBlockType)arg1;
- (id)ak_mapNullable:(CDUnknownBlockType)arg1;
- (id)ak_filter:(CDUnknownBlockType)arg1;

@end
