/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSSet, NSString;

@interface PLPTPAssetHandle : NSObject

{
    _Bool _requiresConversion;
    long long _type;
    NSManagedObjectID *_assetID;
    NSManagedObjectID *_sidecarID;
    NSSet *_siblingAssetHandleTypes;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSManagedObjectID *assetID;
@property (copy, nonatomic, readonly) NSManagedObjectID *sidecarID;
@property (nonatomic, readonly) _Bool requiresConversion;
@property (nonatomic, readonly) NSString *auxiliaryResourceFilenameMarker;
@property (copy, nonatomic, readonly) NSSet *siblingAssetHandleTypes;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(_Bool)arg4;
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(_Bool)arg4 siblingAssetHandleTypes:(id)arg5;
- (id)assetHandleBySettingRequiresConversion;
- (id)assetHandleBySettingSiblingAssetHandleTypes:(id)arg1;
- (_Bool)hasSiblingAssetWithAssetHandleType:(long long)arg1;

@end
