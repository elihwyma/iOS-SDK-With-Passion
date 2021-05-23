/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBRequest.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray;

@interface ICPBDGSFinishDelegationRequest : PBRequest <Swift>

{
    NSMutableArray *_playerDelegateInfoTokens;
}

@property (retain, nonatomic) NSMutableArray *playerDelegateInfoTokens;

+ (Class)playerDelegateInfoTokenType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addPlayerDelegateInfoToken:(id)arg1;
- (void)clearPlayerDelegateInfoTokens;
- (unsigned long long)playerDelegateInfoTokensCount;
- (id)playerDelegateInfoTokenAtIndex:(unsigned long long)arg1;

@end
