/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BFFSetupAssistantDeviceToDeviceMigrationSuccess : PBCodable

{
    unsigned long long _numberOfFilesTransferred;
    unsigned long long _restoreDuration;
    unsigned long long _size;
    unsigned long long _timestamp;
    unsigned long long _transferDuration;
    int _connectionType;
    NSString *_sourceDeviceModel;
    NSString *_sourceDeviceProductVersion;
    NSString *_targetDeviceModel;
    NSString *_targetDeviceProductVersion;
    _Bool _inAppleStore;
    struct {
        unsigned int numberOfFilesTransferred:1;
        unsigned int restoreDuration:1;
        unsigned int size:1;
        unsigned int timestamp:1;
        unsigned int transferDuration:1;
        unsigned int connectionType:1;
        unsigned int inAppleStore:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) unsigned long long size;
@property (nonatomic) _Bool hasTransferDuration;
@property (nonatomic) unsigned long long transferDuration;
@property (nonatomic) _Bool hasRestoreDuration;
@property (nonatomic) unsigned long long restoreDuration;
@property (nonatomic, readonly) _Bool hasSourceDeviceModel;
@property (retain, nonatomic) NSString *sourceDeviceModel;
@property (nonatomic, readonly) _Bool hasSourceDeviceProductVersion;
@property (retain, nonatomic) NSString *sourceDeviceProductVersion;
@property (nonatomic, readonly) _Bool hasTargetDeviceModel;
@property (retain, nonatomic) NSString *targetDeviceModel;
@property (nonatomic, readonly) _Bool hasTargetDeviceProductVersion;
@property (retain, nonatomic) NSString *targetDeviceProductVersion;
@property (nonatomic) _Bool hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) _Bool hasInAppleStore;
@property (nonatomic) _Bool inAppleStore;
@property (nonatomic) _Bool hasNumberOfFilesTransferred;
@property (nonatomic) unsigned long long numberOfFilesTransferred;

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
