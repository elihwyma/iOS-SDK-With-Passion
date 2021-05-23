/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQueryResult.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface _UTType : _LSQueryResult

{
    NSString *__glyphName;
    NSString *__iconName;
}

@property (nonatomic, readonly, getter=_isWildcard) _Bool _wildcard;
@property (nonatomic, readonly, getter=_isActive) _Bool _active;
@property (nonatomic, readonly, getter=_isPublic) _Bool _public;
@property (nonatomic, readonly, getter=_isAppleInternal) _Bool _appleInternal;
@property (nonatomic, readonly) NSString *_unlocalizedDescription;
@property (nonatomic, readonly) NSDictionary *_localizedDescriptionDictionary;
@property (nonatomic, readonly) NSString *_kernelExtensionName;
@property (nonatomic, readonly) NSSet *_pedigree;
@property (nonatomic, readonly) NSURL *_iconURL;
@property (nonatomic, readonly) NSString *_glyphName;
@property (nonatomic, readonly) NSString *_iconName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSNumber *version;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSURL *declaringBundleURL;
@property (nonatomic, readonly) NSDictionary *declaration;
@property (nonatomic, readonly, getter=isDynamic) _Bool dynamic;
@property (nonatomic, readonly, getter=isDeclared) _Bool declared;
@property (nonatomic, readonly) NSDictionary *tagSpecification;
@property (nonatomic, readonly) NSURL *referenceURL;
@property (nonatomic, readonly) NSArray *parentIdentifiers;

+ (_Bool)_isDeclaration:(id)arg1 equalToDeclaration:(id)arg2;
+ (struct __CFArray *)_copyIdentifiersWithQuery:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1;
- (_Bool)conformsToType:(id)arg1;
- (_Bool)conformsToTypeIdentifier:(id)arg1;
- (void)_enumeratePedigreeWithBlock:(CDUnknownBlockType)arg1;

@end
