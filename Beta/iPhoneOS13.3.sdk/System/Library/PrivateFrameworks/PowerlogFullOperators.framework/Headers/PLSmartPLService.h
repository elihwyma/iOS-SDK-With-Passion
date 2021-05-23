/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PLService.h>

@class NSMutableDictionary;

@interface PLSmartPLService : PLService

{
    NSMutableDictionary *_smartPLHelpers;
}

@property (retain) NSMutableDictionary *smartPLHelpers;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSmartTrigger;
+ (id)entryEventPointDefinitionSample;

- (id)init;
- (void)initOperatorDependancies;
- (void)logEventPointHeapForProcessName:(id)arg1;
- (void)logEventPointVMMapForProcessName:(id)arg1;
- (void)logEventPointStackShotWithReason:(id)arg1;
- (void)logEventPointSampleForProcessName:(id)arg1;
- (void)logEventPointSmartPLFiredFromAuxilary:(Class)arg1 withReason:(id)arg2;
- (void)logEventPointHeap;
- (void)logEventPointVMMap;
- (void)logEventPointStackShot;
- (void)logEventPointSample;
- (void)vmmapProcessName:(id)arg1;

@end
