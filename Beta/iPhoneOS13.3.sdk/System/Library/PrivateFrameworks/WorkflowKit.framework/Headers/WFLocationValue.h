/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class CLPlacemark, NSString, WFVariableString;

@interface WFLocationValue : NSObject <Swift>

{
    _Bool _currentLocation;
    NSString *_locationName;
    CLPlacemark *_placemark;
    WFVariableString *_legacyVariableString;
}

@property (nonatomic, readonly) WFVariableString *legacyVariableString;
@property (nonatomic, readonly) NSString *locationName;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly, getter=isCurrentLocation) _Bool currentLocation;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSString *defaultSearchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)serializedRepresentation;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithLocationName:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithLocationName:(id)arg1 placemark:(id)arg2;
- (id)initWithCurrentLocation;
- (id)initWithLegacyVariableString:(id)arg1;

@end
