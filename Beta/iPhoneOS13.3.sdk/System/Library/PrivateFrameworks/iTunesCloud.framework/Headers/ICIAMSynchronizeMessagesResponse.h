/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <Swift>

{
    NSMutableArray *_applicationMessageSyncResponses;
}

@property (retain, nonatomic) NSMutableArray *applicationMessageSyncResponses;

+ (Class)applicationMessageSyncResponsesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)applicationMessageSyncResponsesCount;
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1;
- (void)addApplicationMessageSyncResponses:(id)arg1;
- (void)clearApplicationMessageSyncResponses;

@end
