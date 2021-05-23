/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString, WFMediaRoutePicker;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter

{
    WFMediaRoutePicker *_routePicker;
}

@property (retain, nonatomic) WFMediaRoutePicker *routePicker;
@property (nonatomic, readonly) long long routeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (_Bool)hidesAccessoryIconInEditor;
- (_Bool)preferItemPickerSheet;
- (_Bool)parameterStateIsValid:(id)arg1;
- (void)startUpdatingPossibleValues;
- (void)stopUpdatingPossibleValues;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)routePickerDidUpdateAvailableRoutes:(id)arg1;
- (void)startDiscoveringRoutes;
- (void)stopDiscoveringRoutes;
- (_Bool)shouldDefaultToLocalDeviceEndpoint;
- (id)sortedStatesForAvailableRoutes:(id)arg1;

@end
