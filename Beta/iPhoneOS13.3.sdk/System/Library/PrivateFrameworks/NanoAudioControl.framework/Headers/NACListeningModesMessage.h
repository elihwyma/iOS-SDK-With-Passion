/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NACListeningModesMessage : PBCodable

{
    NSMutableArray *_availableListeningModes;
    NSString *_category;
    NSString *_currentListeningMode;
    NSData *_error;
    int _originIdentifier;
    CDStruct_7fce75b2 _has;
}

@property (retain, nonatomic) NSMutableArray *availableListeningModes;
@property (nonatomic, readonly) _Bool hasCurrentListeningMode;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) _Bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) NSData *error;

+ (Class)availableListeningModeType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAvailableListeningMode:(id)arg1;
- (unsigned long long)availableListeningModesCount;
- (void)clearAvailableListeningModes;
- (id)availableListeningModeAtIndex:(unsigned long long)arg1;

@end
