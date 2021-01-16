//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>
#import <ActionKit/WFParameterEventObserver-Protocol.h>

@interface WFGetDirectionsAction : WFAction <WFDynamicEnumerationDataSource, WFParameterEventObserver>
{
}

+ (id)localizedNameForDirectionsModeString:(id)arg1;
+ (NSUInteger)directionsModeFromString:(id)arg1;
- (id)appIdentifier;
- (void)openMapsURL:(id)arg1 withAppIdentifier:(id)arg2;
- (void)getMapsURLForMapsLink:(id)arg1 appName:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)openMapsLink:(id)arg1 inAppNamed:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)supportedDirectionsModesForAppName:(id)arg1;
- (void)parameterAttributesDidChange:(id)arg1;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)initializeParameters;

@end
