/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSRWIDependencyDomain, IKJSRWIDependencyDomainType, NSArray, NSString;

@interface IKJSRWIDependencyDomainProperty : NSObject

{
    NSString *_reference;
    NSArray *_enumOptions;
    _Bool _required;
    NSString *_name;
    NSString *_purpose;
    NSString *_propertyType;
    IKJSRWIDependencyDomainType *_domainType;
    IKJSRWIDependencyDomain *_domain;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *purpose;
@property (nonatomic, readonly, getter=isRequired) _Bool required;
@property (nonatomic, readonly) NSString *propertyType;
@property (weak, nonatomic, readonly) IKJSRWIDependencyDomainType *domainType;
@property (weak, nonatomic, readonly) IKJSRWIDependencyDomain *domain;

+ (id)propertyNameMapping;
+ (id)typeMapping;

- (id)initWithPropertyDictionary:(id)arg1;
- (id)initWithPropertyDictionary:(id)arg1 forDomain:(id)arg2;
- (id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2;
- (id)propertyDefinitionString;
- (id)methodParameterString;

@end
