/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_UTType.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UTConcreteType : _UTType

{
    NSString *_identifier;
    NSSet *_pedigree;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)version;
- (id)parentIdentifiers;
- (id)declaration;
- (id)declaringBundleURL;
- (_Bool)isDynamic;
- (_Bool)isDeclared;
- (id)tagSpecification;
- (id)referenceURL;
- (_Bool)conformsToType:(id)arg1;
- (_Bool)conformsToTypeIdentifier:(id)arg1;
- (_Bool)_isActive;
- (_Bool)_isPublic;
- (_Bool)_isAppleInternal;
- (id)_unlocalizedDescription;
- (id)_localizedDescriptionDictionary;
- (id)_kernelExtensionName;
- (id)_iconURL;
- (id)initWithIdentifier:(id)arg1 pedigree:(id)arg2;
- (id)_pedigree;

@end
