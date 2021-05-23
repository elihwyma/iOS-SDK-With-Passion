/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSSet, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorageRecord : NSObject <Swift>

{
    UITraitCollection *_traitCollection;
    NSSet *_addedObjects;
    NSSet *_removedObjects;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) NSSet *addedObjects;
@property (nonatomic, readonly) NSSet *removedObjects;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;

@end
