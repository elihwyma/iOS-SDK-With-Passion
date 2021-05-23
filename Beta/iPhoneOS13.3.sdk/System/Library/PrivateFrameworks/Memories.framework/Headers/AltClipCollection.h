/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@protocol AltAspect;

__attribute__((visibility("hidden")))
@interface AltClipCollection : NSObject

{
    NSMutableDictionary *_clips;
    id <AltAspect> _parentClip;
}

@property (retain, nonatomic) NSMutableDictionary *clips;
@property (weak, nonatomic) id <AltAspect> parentClip;
@property (readonly) NSArray *allKeys;
@property (readonly) NSArray *allValues;
@property (readonly) unsigned long long count;

+ (id)recommendedAspects;
+ (id)recommendedAdditionalAspects;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithParent:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectClosestToKeyedSubscript:(id)arg1;

@end
