/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _ACCExternalAccessoryInfo : NSObject

{
    NSDictionary *_fullAccessoryInfo;
    NSString *_primaryUUID;
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_serial;
    NSString *_firmwareRevisionActive;
    NSString *_firmwareRevisionPending;
    NSString *_hardwareRevision;
    NSString *_ppid;
    unsigned long long _destinationSharingOptions;
}

@property (retain) NSDictionary *fullAccessoryInfo;
@property (retain) NSString *primaryUUID;
@property (retain) NSString *name;
@property (retain) NSString *manufacturer;
@property (retain) NSString *model;
@property (retain) NSString *serial;
@property (retain) NSString *firmwareRevisionActive;
@property (retain) NSString *firmwareRevisionPending;
@property (retain) NSString *hardwareRevision;
@property (retain) NSString *ppid;
@property unsigned long long destinationSharingOptions;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAccessoryInfoDictionary:(id)arg1;
- (id)copyAccessoryInfo;

@end
