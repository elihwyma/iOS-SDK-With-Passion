/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

#import <SilexVideo/Swift-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface SVWeakObjectCache : NSObject <Swift>

{
    NSMutableDictionary *_cache;
}

@property (nonatomic, readonly) NSMutableDictionary *cache;
@property (nonatomic, readonly) NSArray *allObjects;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForIdentifier:(id)arg1;

@end
