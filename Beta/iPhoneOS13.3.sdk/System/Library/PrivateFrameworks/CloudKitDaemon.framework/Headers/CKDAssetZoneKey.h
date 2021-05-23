/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecordZoneID;

__attribute__((visibility("hidden")))
@interface CKDAssetZoneKey : NSObject

{
    CKRecordZoneID *_destinationZoneID;
    CKRecordZoneID *_sourceZoneID;
}

@property (retain, nonatomic) CKRecordZoneID *destinationZoneID;
@property (retain, nonatomic) CKRecordZoneID *sourceZoneID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CKPropertiesDescription;
- (id)initWithDestinationZoneID:(id)arg1 sourceZoneID:(id)arg2;
- (id)initWithDestinationZoneID:(id)arg1;

@end
