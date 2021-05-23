/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString;

@interface _MPCProtoItemIdentifierSet : PBCodable <Swift>

{
    long long _cloudID;
    long long _delegateInfoID;
    long long _purchaseHistoryID;
    long long _storeAdamID;
    long long _storeSubscriptionAdamID;
    NSString *_cloudUniversalLibraryID;
    NSString *_contentItemID;
    struct {
        unsigned int cloudID:1;
        unsigned int delegateInfoID:1;
        unsigned int purchaseHistoryID:1;
        unsigned int storeAdamID:1;
        unsigned int storeSubscriptionAdamID:1;
    } _has;
}

@property (nonatomic) _Bool hasDelegateInfoID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic, readonly) _Bool hasContentItemID;
@property (retain, nonatomic) NSString *contentItemID;
@property (nonatomic) _Bool hasStoreAdamID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) _Bool hasStoreSubscriptionAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) _Bool hasCloudID;
@property (nonatomic) long long cloudID;
@property (nonatomic) _Bool hasPurchaseHistoryID;
@property (nonatomic) long long purchaseHistoryID;
@property (nonatomic, readonly) _Bool hasCloudUniversalLibraryID;
@property (retain, nonatomic) NSString *cloudUniversalLibraryID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
