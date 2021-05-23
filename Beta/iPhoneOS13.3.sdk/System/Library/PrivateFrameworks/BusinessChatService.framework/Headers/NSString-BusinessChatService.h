/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSString.h>

@interface NSString (BusinessChatService)

- (_Bool)isBusinessID;
- (id)bizIDWithoutPrefix;
- (id)prefixedBizID;

@end
