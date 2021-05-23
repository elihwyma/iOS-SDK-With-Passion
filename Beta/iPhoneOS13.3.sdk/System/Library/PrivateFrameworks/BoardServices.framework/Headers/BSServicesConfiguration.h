/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServicesConfiguration : NSObject

{
    NSDictionary *_domainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}

@property (copy, nonatomic, readonly) NSOrderedSet *_orderedDomains;
@property (copy, nonatomic, readonly) NSSet *domains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultConfiguration;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithDomainsByIdentifier:(id)arg1;
- (id)domainsContainingServiceIdentifier:(id)arg1;
- (id)domainForIdentifier:(id)arg1;
- (id)domainForMachName:(id)arg1;

@end
