/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface MPSStateRequest : PBRequest

{
    long long _originalLibrarySize;
    NSString *_backupDeviceID;
    NSString *_backupDeviceUDID;
    NSString *_backupDeviceUUID;
    NSString *_iCPLDeviceID;
    NSString *_mPSDeviceID;
    struct {
        unsigned int originalLibrarySize:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMPSDeviceID;
@property (retain, nonatomic) NSString *mPSDeviceID;
@property (nonatomic, readonly) _Bool hasICPLDeviceID;
@property (retain, nonatomic) NSString *iCPLDeviceID;
@property (nonatomic, readonly) _Bool hasBackupDeviceID;
@property (retain, nonatomic) NSString *backupDeviceID;
@property (nonatomic, readonly) _Bool hasBackupDeviceUUID;
@property (retain, nonatomic) NSString *backupDeviceUUID;
@property (nonatomic, readonly) _Bool hasBackupDeviceUDID;
@property (retain, nonatomic) NSString *backupDeviceUDID;
@property (nonatomic) _Bool hasOriginalLibrarySize;
@property (nonatomic) long long originalLibrarySize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
