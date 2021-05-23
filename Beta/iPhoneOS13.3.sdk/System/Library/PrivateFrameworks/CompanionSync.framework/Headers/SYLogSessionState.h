/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSDictionary, NSMutableArray, NSString, SYLogErrorInfo;

__attribute__((visibility("hidden")))
@interface SYLogSessionState : PBCodable

{
    double _fullSessionTimeout;
    unsigned long long _maxConcurrentMessages;
    double _perMessageTimeout;
    SYLogErrorInfo *_error;
    NSString *_identifier;
    NSMutableArray *_peers;
    NSString *_reason;
    int _state;
    NSMutableArray *_transportOptions;
    _Bool _canRestart;
    _Bool _canRollback;
    _Bool _canceled;
    _Bool _isReset;
    _Bool _isSending;
    struct {
        unsigned int fullSessionTimeout:1;
        unsigned int perMessageTimeout:1;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int canceled:1;
        unsigned int isReset:1;
    } _has;
}

@property (retain, nonatomic) NSDictionary *cocoaTransportOptions;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int state;
@property (nonatomic) _Bool isSending;
@property (nonatomic) _Bool hasIsReset;
@property (nonatomic) _Bool isReset;
@property (nonatomic) _Bool hasPerMessageTimeout;
@property (nonatomic) double perMessageTimeout;
@property (nonatomic) _Bool hasFullSessionTimeout;
@property (nonatomic) double fullSessionTimeout;
@property (nonatomic) unsigned long long maxConcurrentMessages;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) SYLogErrorInfo *error;
@property (nonatomic) _Bool hasCanRestart;
@property (nonatomic) _Bool canRestart;
@property (nonatomic) _Bool hasCanRollback;
@property (nonatomic) _Bool canRollback;
@property (nonatomic) _Bool hasCanceled;
@property (nonatomic) _Bool canceled;
@property (retain, nonatomic) NSMutableArray *transportOptions;
@property (retain, nonatomic) NSMutableArray *peers;
@property (nonatomic, readonly) _Bool hasReason;
@property (retain, nonatomic) NSString *reason;

+ (Class)transportOptionsType;
+ (Class)peerType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;
- (void)addTransportOptions:(id)arg1;
- (unsigned long long)transportOptionsCount;
- (void)clearTransportOptions;
- (id)transportOptionsAtIndex:(unsigned long long)arg1;
- (void)addPeer:(id)arg1;
- (unsigned long long)peersCount;
- (void)clearPeers;
- (id)peerAtIndex:(unsigned long long)arg1;

@end
