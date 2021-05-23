/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface CKDAssetVolume : CKObject

{
    NSNumber *_volumeIndex;
    NSUUID *_volumeUUID;
}

@property (retain, nonatomic) NSNumber *volumeIndex;
@property (retain, nonatomic) NSUUID *volumeUUID;

+ (id)CKSQLiteClassName;

- (id)description;
- (id)CKPropertiesDescription;

@end
