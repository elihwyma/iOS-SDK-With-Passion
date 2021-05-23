/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISceneLayerTargetWithContext : NSObject

{
    id _context;
    unsigned long long _equalityType;
    CDUnknownBlockType _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)matchesLayer:(id)arg1;
- (id)initWithContext:(id)arg1 equalityType:(unsigned long long)arg2 matchingBlock:(CDUnknownBlockType)arg3;

@end
