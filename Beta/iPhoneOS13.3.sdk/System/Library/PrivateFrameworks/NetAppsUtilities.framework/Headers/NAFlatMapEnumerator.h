/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NAFlatMapEnumerator : NSEnumerator

{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _map;
}

@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (copy, nonatomic, readonly) CDUnknownBlockType map;

- (id)nextObject;
- (id)allObjects;
- (id)initWithEnumerator:(id)arg1 map:(CDUnknownBlockType)arg2;

@end
