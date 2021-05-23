/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PETMetadata;

@interface PETUpload : PBCodable

{
    NSMutableArray *_aggregatedMessages;
    PETMetadata *_metadata;
    NSMutableArray *_trialMessages;
    NSMutableArray *_unaggregatedMessages;
}

@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) PETMetadata *metadata;
@property (retain, nonatomic) NSMutableArray *aggregatedMessages;
@property (retain, nonatomic) NSMutableArray *unaggregatedMessages;
@property (retain, nonatomic) NSMutableArray *trialMessages;

+ (Class)aggregatedMessagesType;
+ (Class)unaggregatedMessagesType;
+ (Class)trialMessagesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearAggregatedMessages;
- (void)addAggregatedMessages:(id)arg1;
- (unsigned long long)aggregatedMessagesCount;
- (id)aggregatedMessagesAtIndex:(unsigned long long)arg1;
- (void)clearUnaggregatedMessages;
- (void)addUnaggregatedMessages:(id)arg1;
- (unsigned long long)unaggregatedMessagesCount;
- (id)unaggregatedMessagesAtIndex:(unsigned long long)arg1;
- (void)clearTrialMessages;
- (void)addTrialMessages:(id)arg1;
- (unsigned long long)trialMessagesCount;
- (id)trialMessagesAtIndex:(unsigned long long)arg1;

@end
