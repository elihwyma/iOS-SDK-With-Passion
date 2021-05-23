/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSString;

@interface CPLScopedIdentifier : NSObject

{
    long long _scopeIndex;
    NSString *_scopeIdentifier;
    NSString *_identifier;
}

@property (nonatomic) long long scopeIndex;
@property (copy, readonly) NSString *scopeIdentifier;
@property (copy, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)descriptionWithScopeIdentifier:(id)arg1 identifier:(id)arg2;
+ (id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)arg1;
+ (id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)arg1;
+ (id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)arg1;
+ (id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)arg1;
+ (id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)arg1;
+ (id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)arg1;
+ (id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(_Bool)arg2;
+ (id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(_Bool)arg2 defaultScopeIdentifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isInMainScope;
- (id)initInMainScopeWithIdentifier:(id)arg1;
- (id)descriptionWithNoScopeIndex;
- (id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2;
- (id)safeFilename;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (_Bool)cplSpecialIsEqual:(id)arg1;
- (unsigned long long)cplSpecialHash;
- (id)initRelativeToScopedIdentifier:(id)arg1 identifier:(id)arg2;
- (id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 scopeIndex:(long long)arg3;

@end
