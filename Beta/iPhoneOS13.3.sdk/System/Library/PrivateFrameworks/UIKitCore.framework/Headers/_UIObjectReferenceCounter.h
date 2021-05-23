/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIObjectReferenceCounter : NSObject

{
    NSCountedSet *_objectReferences;
}

- (id)init;
- (id)allObjects;
- (void)incrementReferenceForObject:(id)arg1;
- (void)decrementReferenceForObject:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end
