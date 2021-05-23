/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable

{
    NSMutableArray *_addingOutputDeviceUIDs;
    int _outputContextType;
    NSMutableArray *_removingOutputDeviceUIDs;
    NSMutableArray *_settingOutputDeviceUIDs;
    struct {
        unsigned int outputContextType:1;
    } _has;
}

@property (nonatomic) _Bool hasOutputContextType;
@property (nonatomic) int outputContextType;
@property (retain, nonatomic) NSMutableArray *addingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *removingOutputDeviceUIDs;
@property (retain, nonatomic) NSMutableArray *settingOutputDeviceUIDs;

+ (Class)addingOutputDeviceUIDType;
+ (Class)removingOutputDeviceUIDType;
+ (Class)settingOutputDeviceUIDType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAddingOutputDeviceUID:(id)arg1;
- (void)addRemovingOutputDeviceUID:(id)arg1;
- (void)addSettingOutputDeviceUID:(id)arg1;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (void)clearAddingOutputDeviceUIDs;
- (id)addingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (void)clearRemovingOutputDeviceUIDs;
- (id)removingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)settingOutputDeviceUIDsCount;
- (void)clearSettingOutputDeviceUIDs;
- (id)settingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (id)outputContextTypeAsString:(int)arg1;
- (int)StringAsOutputContextType:(id)arg1;

@end
