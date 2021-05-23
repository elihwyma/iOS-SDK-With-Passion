/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)homeAccessoryStateActionWithHome:(id)arg1;

- (void)dealloc;
- (id)localizedName;
- (id)home;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)characteristic;
- (id)homeName;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)localizedDefaultOutputName;
- (void)updateCharacteristicsEnumeration;

@end
