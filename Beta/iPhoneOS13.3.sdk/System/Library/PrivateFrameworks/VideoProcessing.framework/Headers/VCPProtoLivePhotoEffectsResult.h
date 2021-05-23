/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoEffectsResult : PBCodable <Swift>

{
    unsigned long long _longExposureSuggestionState;
    unsigned long long _loopSuggestionState;
    NSData *_recipeBlob;
}

@property (nonatomic) unsigned long long loopSuggestionState;
@property (nonatomic) unsigned long long longExposureSuggestionState;
@property (nonatomic, readonly) _Bool hasRecipeBlob;
@property (retain, nonatomic) NSData *recipeBlob;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)exportToLegacyDictionary;

@end
