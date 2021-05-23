/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BRMangledID : NSObject

{
    NSString *_mangledIDString;
}

@property (nonatomic, readonly) _Bool isShared;
@property (nonatomic, readonly) _Bool isPrivate;
@property (nonatomic, readonly) _Bool isCloudDocsMangledID;
@property (nonatomic, readonly) _Bool isPassbookMangledID;
@property (nonatomic, readonly) _Bool isBRTestMangledID;
@property (nonatomic, readonly) _Bool isDesktopMangledID;
@property (nonatomic, readonly) _Bool isDocumentsMangledID;
@property (nonatomic, readonly) NSString *appLibraryOrZoneName;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *mangledIDString;
@property (nonatomic, readonly) NSString *aliasTargetContainerString;

+ (_Bool)supportsSecureCoding;
+ (id)_mangledIDStringFromZoneName:(id)arg1 ownerName:(id)arg2 validate:(_Bool)arg3;
+ (_Bool)validateContainerID:(id)arg1;
+ (id)_privateMangledContainerID:(id)arg1 validate:(_Bool)arg2;
+ (_Bool)validateMangledIDString:(id)arg1;
+ (id)_containerIDFromSharedMangledIDString:(id)arg1 validate:(_Bool)arg2;
+ (id)_privateUnmangledContainerID:(id)arg1 validate:(_Bool)arg2;
+ (id)_ownerNameFromSharedMangledIDString:(id)arg1 validate:(_Bool)arg2;
+ (_Bool)validateOwnerName:(id)arg1;
+ (id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(_Bool)arg3;
+ (id)_containerIDFromSharedContainerID:(id)arg1 validate:(_Bool)arg2;
+ (id)cloudDocsMangledID;
+ (id)desktopMangledID;
+ (id)documentsMangledID;
+ (id)sideCarMangledID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)initWithAppLibraryName:(id)arg1;
- (_Bool)isEqualToMangledID:(id)arg1;
- (id)initWithRecordZoneID:(id)arg1;
- (id)initWithMangledString:(id)arg1;
- (id)initWithAliasTargetContainerString:(id)arg1;

@end
