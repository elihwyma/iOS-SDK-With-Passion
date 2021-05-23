/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFWeakObjectCache;

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _MFWeakObjectCacheRef : NSObject

{
    id <NSCopying> _key;
    MFWeakObjectCache *_cache;
}

@property (copy, nonatomic) id <NSCopying> key;
@property (weak, nonatomic) MFWeakObjectCache *cache;

- (void)dealloc;

@end
