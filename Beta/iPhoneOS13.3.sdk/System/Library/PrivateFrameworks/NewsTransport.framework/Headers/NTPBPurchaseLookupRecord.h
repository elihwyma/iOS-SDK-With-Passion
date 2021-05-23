/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBRecordBase;

@interface NTPBPurchaseLookupRecord : PBCodable

{
    NSString *_appAdamID;
    NTPBRecordBase *_base;
    NSMutableArray *_bundleChannelTagIDs;
    NSMutableArray *_channelTagIDs;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic, readonly) _Bool hasAppAdamID;
@property (retain, nonatomic) NSString *appAdamID;
@property (retain, nonatomic) NSMutableArray *channelTagIDs;
@property (retain, nonatomic) NSMutableArray *bundleChannelTagIDs;

+ (Class)channelTagIDsType;
+ (Class)bundleChannelTagIDsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addChannelTagIDs:(id)arg1;
- (void)addBundleChannelTagIDs:(id)arg1;
- (void)clearChannelTagIDs;
- (unsigned long long)channelTagIDsCount;
- (id)channelTagIDsAtIndex:(unsigned long long)arg1;
- (void)clearBundleChannelTagIDs;
- (unsigned long long)bundleChannelTagIDsCount;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)arg1;

@end
