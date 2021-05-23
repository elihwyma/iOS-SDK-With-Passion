/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface ICPBDGSStartDelegationResponse : PBCodable <Swift>

{
    NSData *_playerAnisetteMID;
    NSData *_playerDeviceGUID;
    NSMutableArray *_playerInfoContextTokens;
    NSString *_playerUserAgent;
}

@property (nonatomic, readonly) _Bool hasPlayerAnisetteMID;
@property (retain, nonatomic) NSData *playerAnisetteMID;
@property (nonatomic, readonly) _Bool hasPlayerDeviceGUID;
@property (retain, nonatomic) NSData *playerDeviceGUID;
@property (retain, nonatomic) NSMutableArray *playerInfoContextTokens;
@property (nonatomic, readonly) _Bool hasPlayerUserAgent;
@property (retain, nonatomic) NSString *playerUserAgent;

+ (Class)playerInfoContextTokenType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addPlayerInfoContextToken:(id)arg1;
- (void)clearPlayerInfoContextTokens;
- (unsigned long long)playerInfoContextTokensCount;
- (id)playerInfoContextTokenAtIndex:(unsigned long long)arg1;

@end
