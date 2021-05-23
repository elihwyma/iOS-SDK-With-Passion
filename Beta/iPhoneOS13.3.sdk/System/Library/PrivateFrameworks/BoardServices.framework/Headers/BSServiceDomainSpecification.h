/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServiceDomainSpecification : NSObject

{
    NSString *_identifier;
    NSString *_machName;
    NSDictionary *_servicesByIdentifier;
    NSOrderedSet *_orderedServices;
}

@property (copy, nonatomic, readonly) NSOrderedSet *_orderedServices;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *machName;
@property (copy, nonatomic, readonly) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 machName:(id)arg2 servicesByIdentifier:(id)arg3;
- (id)serviceForIdentifier:(id)arg1;
- (id)_domainWithAdditionalServices:(id)arg1;

@end
