/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@interface WFLocationParameter : WFParameter

{
    _Bool _allowsTextOnlyLocations;
    _Bool _allowsCurrentLocation;
    _Bool _skipsProcessingCurrentLocation;
    _Bool _defaultToCurrentLocation;
}

@property (nonatomic, readonly) _Bool defaultToCurrentLocation;
@property (nonatomic, readonly) _Bool allowsTextOnlyLocations;
@property (nonatomic, readonly) _Bool allowsCurrentLocation;
@property (nonatomic, readonly) _Bool skipsProcessingCurrentLocation;
@property (nonatomic, readonly) double currentLocationAccuracy;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSerializedRepresentation;

@end
