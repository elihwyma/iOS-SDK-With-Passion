/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NAFilterEnumerator : NSEnumerator

{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _filter;
}

@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (copy, nonatomic, readonly) CDUnknownBlockType filter;

- (id)nextObject;
- (id)allObjects;
- (id)initWithEnumerator:(id)arg1 filter:(CDUnknownBlockType)arg2;

@end
