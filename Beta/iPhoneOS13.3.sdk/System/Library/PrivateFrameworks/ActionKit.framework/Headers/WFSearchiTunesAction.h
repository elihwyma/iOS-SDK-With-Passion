/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString;

@interface WFSearchiTunesAction : WFAction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)mediaType;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)updateParameterVisibility;

@end
