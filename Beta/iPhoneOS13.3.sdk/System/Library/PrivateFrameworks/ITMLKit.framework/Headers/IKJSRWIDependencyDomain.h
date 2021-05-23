/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKJSRWIDependencyDomain : NSObject

{
    NSString *_identifier;
    Class _agentClass;
    NSDictionary *_types;
    NSDictionary *_commands;
    NSDictionary *_events;
}

@property (nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) Class agentClass;
@property (nonatomic, readonly) NSString *dispatcherClassString;
@property (nonatomic, readonly) NSDictionary *types;
@property (nonatomic, readonly) NSDictionary *commands;
@property (nonatomic, readonly) NSDictionary *events;

+ (id)allDomains;
+ (id)allowedDomains;
+ (id)domainAgentClassMap;
+ (void)processDomains:(id)arg1;

- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2;
- (_Bool)isValidForTypesWithError:(id *)arg1;
- (_Bool)isValidForAgentWithError:(id *)arg1;
- (_Bool)isValidForEventsWithError:(id *)arg1;

@end
