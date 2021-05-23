/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator

{
    NSDictionary *_keyplaneCache;
    NSEnumerator *_nameEnum;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithKeyplaneCache:(id)arg1;

@end
