/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTCacheableResourceChangeToken, AVTCachedResource;

@interface AVTInMemoryResourceCacheEntry : NSObject

{
    id <AVTCachedResource> _resource;
    id <AVTCacheableResourceChangeToken> _changeToken;
    NSString *_key;
    unsigned long long _cost;
}

@property (nonatomic, readonly) id <AVTCachedResource> resource;
@property (nonatomic, readonly) id <AVTCacheableResourceChangeToken> changeToken;
@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) unsigned long long cost;

- (void)dealloc;
- (id)description;
- (id)initWithResource:(id)arg1 changeToken:(id)arg2 key:(id)arg3 cost:(unsigned long long)arg4;

@end
