/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject <Swift>

@property (copy, nonatomic) NSURL *uri;
@property (copy, nonatomic) NSString *verb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)setLatencyDiagnosticConfigurationDiagnosticAction;
+ (id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
