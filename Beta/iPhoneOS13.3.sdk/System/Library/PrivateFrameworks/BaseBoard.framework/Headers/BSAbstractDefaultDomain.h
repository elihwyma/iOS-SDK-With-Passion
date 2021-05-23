/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface BSAbstractDefaultDomain : NSObject

{
    NSUserDefaults *_userDefaults;
    _Bool _boundDefaults;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableSet *_observerQueue_observers;
    NSMutableDictionary *_defaultKeyToDefaultValue;
}

+ (void)initialize;
+ (_Bool)__useDynamicMethodResolution;
+ (void)__processPropertyMetadata:(id)arg1;
+ (void)__assignPropertyImplementations:(id)arg1;
+ (id)__getPropertyMetadataForProperty:(struct objc_property *)arg1;
+ (Class)__classFromPropertyType:(id)arg1;
+ (_Bool)__isPropertyTypeValid:(BOOL)arg1 class:(Class)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_removeObserver:(id)arg1;
- (id)_store;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithDomain:(id)arg1;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4;
- (void)_bindAndRegisterDefaults;
- (void)_bindDefaultsIfNecessary;
- (id)_initWithDefaults:(id)arg1;
- (id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3;
- (void)synchronizeDefaults;
- (id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)resetAllDefaults;
- (void)_addObserver:(id)arg1;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2;
- (void)_setUserDefaults:(id)arg1;
- (id)_defaultKeyFromPropertyName:(id)arg1;
- (id)_propertyFromSelector:(SEL)arg1;
- (_Bool)_isCollectionEmpty:(id)arg1;

@end
