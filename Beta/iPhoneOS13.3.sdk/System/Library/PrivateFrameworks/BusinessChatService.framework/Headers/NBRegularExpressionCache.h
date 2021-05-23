/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface NBRegularExpressionCache : NSObject

{
    NSCache *_cache;
}

@property (retain, nonatomic) NSCache *cache;

+ (id)sharedInstance;

- (id)init;
- (id)regularExpressionForPattern:(id)arg1 error:(id *)arg2;

@end
