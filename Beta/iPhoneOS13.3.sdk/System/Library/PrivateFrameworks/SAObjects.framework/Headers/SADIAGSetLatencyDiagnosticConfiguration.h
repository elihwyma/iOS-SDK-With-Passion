/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SADIAGSetLatencyDiagnosticConfiguration : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *diagnosticActions;

+ (id)setLatencyDiagnosticConfiguration;
+ (id)setLatencyDiagnosticConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
