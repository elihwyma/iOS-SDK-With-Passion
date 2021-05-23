/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <Foundation/NSObject.h>

@interface SAClassRegistry : NSObject

+ (void)initialize;
+ (void)registerAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2;
+ (Class)classForAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2;
+ (void)registerClass:(Class)arg1 forAceClassName:(id)arg2 inGroupWithIdentifier:(id)arg3;
+ (id)sharedClassRegistry;

- (void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3;
- (Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2;

@end
