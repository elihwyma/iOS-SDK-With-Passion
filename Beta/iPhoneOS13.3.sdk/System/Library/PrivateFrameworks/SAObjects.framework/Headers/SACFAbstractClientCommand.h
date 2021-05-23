/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommand : SADomainCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *jsFileNameSuffix;
@property (copy, nonatomic) NSArray *jsLibraries;
@property (copy, nonatomic) NSString *jsParameters;
@property (copy, nonatomic) NSString *jsScript;
@property (nonatomic) _Bool shouldCacheBytecode;
@property (nonatomic) _Bool shouldCacheScript;
@property (nonatomic) _Bool shouldRestartContext;

+ (id)abstractClientCommand;
+ (id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
