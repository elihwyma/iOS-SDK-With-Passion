/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBTopOfFeedModuleExposure : PBCodable

{
    NSData *_feedViewExposureId;
    int _moduleEventType;
    NSData *_moduleExposureId;
    int _moduleItemCount;
    int _moduleLocation;
    struct {
        unsigned int moduleEventType:1;
        unsigned int moduleItemCount:1;
        unsigned int moduleLocation:1;
    } _has;
}

@property (nonatomic) _Bool hasModuleEventType;
@property (nonatomic) int moduleEventType;
@property (nonatomic) _Bool hasModuleLocation;
@property (nonatomic) int moduleLocation;
@property (nonatomic) _Bool hasModuleItemCount;
@property (nonatomic) int moduleItemCount;
@property (nonatomic, readonly) _Bool hasModuleExposureId;
@property (retain, nonatomic) NSData *moduleExposureId;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)moduleEventTypeAsString:(int)arg1;
- (int)StringAsModuleEventType:(id)arg1;
- (id)moduleLocationAsString:(int)arg1;
- (int)StringAsModuleLocation:(id)arg1;

@end
