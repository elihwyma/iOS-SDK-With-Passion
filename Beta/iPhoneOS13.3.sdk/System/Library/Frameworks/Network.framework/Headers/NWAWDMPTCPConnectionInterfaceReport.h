/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWAWDMPTCPConnectionInterfaceReport : PBCodable

{
    CDStruct_95bda58d _postConnectSubflowFailureErrors;
    long long _dataInKB;
    long long _dataOutKB;
    unsigned long long _timestamp;
    NSString *_interfaceName;
    int _secondaryFlowFailureCount;
    int _secondaryFlowSuccessCount;
    _Bool _postConnectTcpFallbackCount;
    struct {
        unsigned int dataInKB:1;
        unsigned int dataOutKB:1;
        unsigned int timestamp:1;
        unsigned int secondaryFlowFailureCount:1;
        unsigned int secondaryFlowSuccessCount:1;
        unsigned int postConnectTcpFallbackCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasInterfaceName;
@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic, readonly) unsigned long long postConnectSubflowFailureErrorsCount;
@property (nonatomic, readonly) int *postConnectSubflowFailureErrors;
@property (nonatomic) _Bool hasDataInKB;
@property (nonatomic) long long dataInKB;
@property (nonatomic) _Bool hasDataOutKB;
@property (nonatomic) long long dataOutKB;
@property (nonatomic) _Bool hasSecondaryFlowSuccessCount;
@property (nonatomic) int secondaryFlowSuccessCount;
@property (nonatomic) _Bool hasSecondaryFlowFailureCount;
@property (nonatomic) int secondaryFlowFailureCount;
@property (nonatomic) _Bool hasPostConnectTcpFallbackCount;
@property (nonatomic) _Bool postConnectTcpFallbackCount;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPostConnectSubflowFailureErrors;
- (void)addPostConnectSubflowFailureErrors:(int)arg1;
- (int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1;
- (void)setPostConnectSubflowFailureErrors:(int *)arg1 count:(unsigned long long)arg2;

@end
