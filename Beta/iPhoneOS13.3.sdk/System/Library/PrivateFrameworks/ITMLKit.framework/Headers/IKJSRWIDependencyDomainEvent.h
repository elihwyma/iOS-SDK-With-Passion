/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSRWIDependencyDomain, NSArray, NSString;

@interface IKJSRWIDependencyDomainEvent : NSObject

{
    NSString *_name;
    NSString *_purpose;
    IKJSRWIDependencyDomain *_domain;
    NSArray *_params;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *purpose;
@property (weak, nonatomic, readonly) IKJSRWIDependencyDomain *domain;
@property (nonatomic, readonly) NSArray *params;

- (_Bool)isValidWithError:(id *)arg1;
- (id)selectorString;
- (id)_eventInterfaceStringForImplementation:(_Bool)arg1;
- (id)initWithEventDictionary:(id)arg1 forDomain:(id)arg2;
- (id)eventInterfaceString;
- (id)eventImplementationStringWithSoftLinking:(_Bool)arg1;

@end
