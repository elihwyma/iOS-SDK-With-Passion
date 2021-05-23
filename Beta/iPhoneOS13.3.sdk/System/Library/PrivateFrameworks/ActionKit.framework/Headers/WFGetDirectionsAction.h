/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString;

@interface WFGetDirectionsAction : WFAction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)directionsModeFromString:(id)arg1;
+ (id)localizedNameForDirectionsModeString:(id)arg1;

- (id)appIdentifier;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)parameterAttributesDidChange:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)supportedDirectionsModesForAppName:(id)arg1;
- (void)openMapsLink:(id)arg1 inAppNamed:(id)arg2;
- (void)getMapsURLForMapsLink:(id)arg1 appName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openMapsURL:(id)arg1 withAppIdentifier:(id)arg2;

@end
