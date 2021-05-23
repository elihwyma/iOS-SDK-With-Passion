/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSString;

@interface WFMediaRouteDescriptor : MTLModel

{
    _Bool _isLocalDevice;
    NSString *_routeName;
    NSString *_groupUID;
    NSString *_routeUID;
}

@property (copy, nonatomic, readonly) NSString *routeName;
@property (copy, nonatomic, readonly) NSString *groupUID;
@property (copy, nonatomic, readonly) NSString *routeUID;
@property (nonatomic, readonly) _Bool isLocalDevice;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (_Bool)routeUID:(id)arg1 isEqualToRouteUID:(id)arg2;

- (id)initWithRouteUID:(id)arg1 groupUID:(id)arg2 routeName:(id)arg3 isLocalDevice:(_Bool)arg4;
- (_Bool)isEqualInRouteUIDs:(id)arg1;
- (id)findMatchingRoute:(id)arg1;

@end
