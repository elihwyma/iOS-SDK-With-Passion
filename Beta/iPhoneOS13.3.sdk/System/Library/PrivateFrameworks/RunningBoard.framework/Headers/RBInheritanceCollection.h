/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

@interface RBInheritanceCollection : NSObject

{
    NSDictionary *_inheritancesByEnvironment;
    NSSet *_inheritances;
    NSSet *_namespaces;
}

+ (id)collectionWithInheritances:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)allNamespaces;
- (id)inheritancesForEnvironment:(id)arg1;
- (id)_initWithInheritances:(id)arg1;
- (id)_initWithCollection:(id)arg1;
- (id)allEnvironments;
- (id)allInheritances;

@end
