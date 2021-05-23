/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _CPDeviceContext;

@interface _CPUsageSinceLookback : PBCodable

{
    int _client;
    int _totalUsagesInCollectionPeriod;
    int _configuredLookbackTimeInDays;
    int _activeDaysInCollectionPeriod;
    int _totalEngagements;
    long long _collectionStartTimestamp;
    long long _collectionEndTimestamp;
    _CPDeviceContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) int client;
@property (nonatomic) int totalUsagesInCollectionPeriod;
@property (retain, nonatomic) _CPDeviceContext *context;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic) int activeDaysInCollectionPeriod;
@property (nonatomic) int totalEngagements;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
