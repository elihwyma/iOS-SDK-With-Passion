/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface SXComponentNode : NSObject

{
    NSString *_componentIdentifier;
    long long _attribute;
    NSMutableSet *_mutableDependencies;
}

@property (retain, nonatomic) NSMutableSet *mutableDependencies;
@property (nonatomic, readonly) NSString *componentIdentifier;
@property (nonatomic, readonly) long long attribute;
@property (nonatomic, readonly) NSSet *dependencies;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithComponentIdentifier:(id)arg1 andAttribute:(long long)arg2;
- (void)addComponentDependency:(id)arg1;
- (_Bool)hasDependencyToComponentIdentifier:(id)arg1 attribute:(long long)arg2;

@end
