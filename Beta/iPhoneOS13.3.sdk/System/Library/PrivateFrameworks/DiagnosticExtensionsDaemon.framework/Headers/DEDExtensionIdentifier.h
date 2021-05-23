/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DEDExtensionIdentifier : NSObject

{
    NSString *_extensionIdentifier;
    long long _invocationNumber;
}

@property (retain) NSString *extensionIdentifier;
@property long long invocationNumber;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)log;
+ (id)archivedClasses;
+ (id)parseDEDIdentifierString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 invocationNumber:(long long)arg2;

@end
