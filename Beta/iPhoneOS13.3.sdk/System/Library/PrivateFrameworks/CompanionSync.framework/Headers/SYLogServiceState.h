/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSDictionary, NSMutableArray, NSString, SYLogDeviceState, SYLogEngineState, SYLogSessionState;

__attribute__((visibility("hidden")))
@interface SYLogServiceState : PBCodable

{
    SYLogEngineState *_engine;
    int _enqueuedSyncType;
    NSString *_name;
    NSString *_peerGenerationID;
    NSString *_peerID;
    int _serviceType;
    SYLogSessionState *_session;
    SYLogDeviceState *_targetedDevice;
    NSMutableArray *_transportOptions;
    _Bool _sessionQueueRunning;
    struct {
        unsigned int serviceType:1;
    } _has;
}

@property (retain, nonatomic) NSDictionary *cocoaTransportOptions;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasEngine;
@property (retain, nonatomic) SYLogEngineState *engine;
@property (nonatomic, readonly) _Bool hasSession;
@property (retain, nonatomic) SYLogSessionState *session;
@property (nonatomic) _Bool sessionQueueRunning;
@property (nonatomic, readonly) _Bool hasTargetedDevice;
@property (retain, nonatomic) SYLogDeviceState *targetedDevice;
@property (nonatomic) int enqueuedSyncType;
@property (retain, nonatomic) NSMutableArray *transportOptions;
@property (nonatomic, readonly) _Bool hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (nonatomic, readonly) _Bool hasPeerGenerationID;
@property (retain, nonatomic) NSString *peerGenerationID;
@property (nonatomic) _Bool hasServiceType;
@property (nonatomic) int serviceType;

+ (Class)transportOptionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
- (int)StringAsServiceType:(id)arg1;
- (void)addTransportOptions:(id)arg1;
- (unsigned long long)transportOptionsCount;
- (void)clearTransportOptions;
- (id)transportOptionsAtIndex:(unsigned long long)arg1;
- (id)enqueuedSyncTypeAsString:(int)arg1;
- (int)StringAsEnqueuedSyncType:(id)arg1;

@end
