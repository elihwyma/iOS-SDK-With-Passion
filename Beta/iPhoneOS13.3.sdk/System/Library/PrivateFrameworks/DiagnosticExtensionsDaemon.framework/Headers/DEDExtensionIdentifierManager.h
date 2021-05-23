/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DEDExtensionIdentifierManager : NSObject

{
    NSMutableDictionary *_identifierTable;
}

@property (retain, nonatomic) NSMutableDictionary *identifierTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)log;
+ (id)archivedClasses;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)allIdentifiers;
- (_Bool)isKnownIdentifier:(id)arg1;
- (id)identifierForExtensionIdentifier:(id)arg1;
- (id)knownIdentifiersForExtensionIdentifier:(id)arg1;
- (void)revokeIdentifier:(id)arg1;
- (id)initWithExtensionIdentifiers:(id)arg1;

@end
