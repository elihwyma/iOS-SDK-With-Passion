/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SXComponents : NSObject <Swift>

{
    NSMutableArray *_components;
    NSMutableDictionary *_componentsByIdentifier;
    NSMutableDictionary *_childComponentsByParentIdentifier;
}

@property (nonatomic, readonly) NSMutableArray *components;
@property (nonatomic, readonly) NSMutableDictionary *componentsByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *childComponentsByParentIdentifier;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *allComponents;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
- (void)addComponent:(id)arg1;
- (id)componentsForContainerComponentWithIdentifier:(id)arg1;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addComponentsFromArray:(id)arg1;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)componentForIdentifier:(id)arg1;
- (id)componentsForContainerComponentWithPath:(id)arg1;

@end
