/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSRWIDependencyDomain, NSArray, NSDictionary, NSString;

@interface IKJSRWIDependencyDomainType : NSObject

{
    NSString *_name;
    NSString *_identifier;
    NSString *_domainType;
    NSString *_purpose;
    IKJSRWIDependencyDomain *_domain;
    NSArray *_initializationParameters;
    NSDictionary *_properties;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *domainType;
@property (nonatomic, readonly) NSString *purpose;
@property (weak, nonatomic, readonly) IKJSRWIDependencyDomain *domain;
@property (nonatomic, readonly) NSArray *initializationParameters;
@property (nonatomic, readonly) NSDictionary *properties;

- (_Bool)isValidWithError:(id *)arg1;
- (id)initializationSelectorString;
- (_Bool)isInitializerValid;
- (id)invalidProperties;
- (id)initializationString;
- (id)initWithTypeDictionary:(id)arg1 forDomain:(id)arg2;
- (id)typeInterfaceString;
- (id)typeImplementationStringWithSoftLinking:(_Bool)arg1;

@end
