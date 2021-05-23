/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface _DKSyncPeer : NSObject

{
    _Bool _companion;
    _Bool _me;
    NSString *_sourceDeviceID;
    NSString *_idsDeviceIdentifier;
    NSString *_zoneName;
    NSDate *_lastSeenDate;
    NSString *_name;
    NSString *_model;
    NSString *_version;
    NSUUID *_uuid;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) NSString *sourceDeviceID;
@property (copy, nonatomic, readonly) NSUUID *sourceDeviceUUID;
@property (copy, nonatomic) NSString *idsDeviceIdentifier;
@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (nonatomic, getter=isCompanion) _Bool companion;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) _Bool me;
@property (copy, nonatomic) NSUUID *uuid;

- (id)init;
- (id)description;
- (id)initWithZoneName:(id)arg1;
- (id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2;
- (id)initWithIDSDeviceIdentifier:(id)arg1;

@end
