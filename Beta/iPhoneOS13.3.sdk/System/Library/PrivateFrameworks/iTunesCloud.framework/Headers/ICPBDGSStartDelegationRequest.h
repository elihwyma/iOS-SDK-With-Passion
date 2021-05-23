/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBRequest.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray;

@interface ICPBDGSStartDelegationRequest : PBRequest <Swift>

{
    NSMutableArray *_playerInfoContextRequestTokens;
}

@property (retain, nonatomic) NSMutableArray *playerInfoContextRequestTokens;

+ (Class)playerInfoContextRequestTokenType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addPlayerInfoContextRequestToken:(id)arg1;
- (void)clearPlayerInfoContextRequestTokens;
- (unsigned long long)playerInfoContextRequestTokensCount;
- (id)playerInfoContextRequestTokenAtIndex:(unsigned long long)arg1;

@end
