/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_UTConcreteType.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSObject, NSString, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UTDeclaredType : _UTConcreteType

{
    NSObject<OS_dispatch_queue> *_additionalInfoQueue;
    unsigned int _flags;
    NSNumber *_version;
    NSDictionary *_localizedDescriptionDictionary;
    NSData *_declaringBundleBookmark;
    NSString *_declaringBundleDelegate;
    NSURL *_declaringBundleURL;
    NSString *_kextName;
    NSDictionary *_tagSpecification;
    NSArray *_conformsTo;
    NSArray *_iconFiles;
    NSURL *_parentIconURL;
    NSString *_referenceURLString;
    NSString *_glyphName;
    NSString *_iconName;
}

+ (_Bool)supportsSecureCoding;

- (id)localizedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)version;
- (id)initWithContext:(struct LSContext *)arg1 UTTypeID:(unsigned int)arg2 UTTypeData:(const CDStruct_d2548575 *)arg3 propertiesToResolve:(unsigned long long)arg4;
- (id)parentIdentifiers;
- (id)declaration;
- (id)declaringBundleURL;
- (_Bool)isDeclared;
- (id)tagSpecification;
- (id)referenceURL;
- (_Bool)_isActive;
- (_Bool)_isPublic;
- (_Bool)_isAppleInternal;
- (id)_localizedDescriptionDictionary;
- (id)_kernelExtensionName;
- (id)_iconURL;
- (id)_glyphName;
- (id)_iconName;
- (_Bool)_isWildcard;
- (_Bool)needsWorkaroundFor22092605;
- (id)_iconURLCheckingParents:(_Bool)arg1;

@end
