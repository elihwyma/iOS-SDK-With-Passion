/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, TSUNoCopyDictionary;

@interface TSDChangePropagationMap : NSObject

{
    TSUNoCopyDictionary *mDictionary;
    NSMutableSet *mClassesOfChangedPrototypes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)p_addClassesForPrototype:(id)arg1;
- (void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3;
- (void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3;
- (id)prototypeChangeForPrototype:(id)arg1;
- (void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4;
- (void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (_Bool)hasAnyChangesForPrototypesOfClasses:(id)arg1;
- (id)prototypePassingTest:(CDUnknownBlockType)arg1;

@end
