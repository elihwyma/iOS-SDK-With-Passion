/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface _DKContentProviderCache : NSObject

{
    NSCache *_cache;
}

@property (retain, nonatomic) NSCache *cache;

- (id)init;
- (id)contentProviderForEventStream:(id)arg1 error:(id *)arg2;

@end
