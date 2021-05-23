/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface TMLState : NSObject

{
    NSMutableDictionary *_properties;
    NSMutableOrderedSet *_propertyKeys;
    NSString *_tmlStateName;
    NSString *_tmlStateExtends;
    TMLState *_baseState;
}

@property (nonatomic, readonly) NSOrderedSet *propertyKeys;
@property (nonatomic, readonly) NSString *tmlStateName;
@property (nonatomic, readonly) NSString *tmlStateExtends;

+ (Class)registerState:(id)arg1 forClass:(Class)arg2;
+ (id)stateForClass:(Class)arg1 stateName:(id)arg2;

- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithStateName:(id)arg1;
- (void)applyToObject:(id)arg1 ignorePropertyKeys:(id)arg2;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (id)tmlIdentifier;
- (void)enterStateFromState:(id)arg1;
- (void)leaveStateToState:(id)arg1;
- (void)applyToObject:(id)arg1 fromState:(id)arg2;

@end
