/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RBDomainAttributeTemplate : NSObject

{
    NSString *_domain;
    NSString *_name;
    NSDictionary *_originatorEntitlements;
    NSDictionary *_targetBundleProperties;
    NSString *_endowmentNamespace;
    NSArray *_attributeGroups;
}

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *originatorEntitlements;
@property (copy, nonatomic) NSDictionary *targetBundleProperties;
@property (copy, nonatomic) NSString *endowmentNamespace;
@property (retain, nonatomic) NSArray *attributeGroups;
@property (copy, nonatomic, readonly) NSString *fullyQualifiedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
