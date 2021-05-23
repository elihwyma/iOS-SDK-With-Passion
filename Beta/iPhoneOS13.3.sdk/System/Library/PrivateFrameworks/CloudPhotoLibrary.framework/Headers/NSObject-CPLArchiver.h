/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@interface NSObject (CPLArchiver)

+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)_cplPropertyAttributeMap;
+ (void)cplDumpProperties;
+ (id)cplAllPropertyNames;
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;

- (id)cplFullDescription;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (_Bool)cplSpecialIsEqual:(id)arg1;
- (unsigned long long)cplSpecialHash;
- (_Bool)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 differingProperty:(id *)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;
- (id)cplDeepCopy;
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;
- (void)cplEncodePropertiesWithCoder:(id)arg1;
- (void)cplDecodePropertiesFromCoder:(id)arg1;
- (_Bool)cplIsEqual:(id)arg1;
- (unsigned long long)cplHash;
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;

@end
