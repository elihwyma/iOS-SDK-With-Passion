/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _UITraitStorageList : NSObject <Swift>

{
    id _topLevelObject;
    NSArray *_traitStorages;
    NSSet *_descendants;
}

@property (weak, nonatomic, readonly) id topLevelObject;
@property (nonatomic, readonly) NSArray *traitStorages;
@property (nonatomic, readonly) NSSet *descendants;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3;

@end
