/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface BFFSetupAssistantOnBoarding : PBCodable

{
    unsigned long long _durationPlaceholder;
    unsigned long long _durationVideo;
    unsigned long long _timestamp;
    unsigned int _feature;
    struct {
        unsigned int durationPlaceholder:1;
        unsigned int durationVideo:1;
        unsigned int timestamp:1;
        unsigned int feature:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasFeature;
@property (nonatomic) unsigned int feature;
@property (nonatomic) _Bool hasDurationPlaceholder;
@property (nonatomic) unsigned long long durationPlaceholder;
@property (nonatomic) _Bool hasDurationVideo;
@property (nonatomic) unsigned long long durationVideo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
