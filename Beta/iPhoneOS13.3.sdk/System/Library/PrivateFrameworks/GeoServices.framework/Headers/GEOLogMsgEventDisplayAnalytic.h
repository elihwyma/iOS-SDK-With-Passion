/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgEventDisplayAnalytic : PBCodable

{
    double _meanImageSpacing;
    int _displayActionTrigger;
    int _displayEvent;
    unsigned int _movementDistance;
    unsigned int _renderedImageCount;
    unsigned int _requestedImageCount;
    unsigned int _requiredResourcesAvailable;
    unsigned int _totalTime;
    struct {
        unsigned int has_meanImageSpacing:1;
        unsigned int has_displayActionTrigger:1;
        unsigned int has_displayEvent:1;
        unsigned int has_movementDistance:1;
        unsigned int has_renderedImageCount:1;
        unsigned int has_requestedImageCount:1;
        unsigned int has_requiredResourcesAvailable:1;
        unsigned int has_totalTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasDisplayActionTrigger;
@property (nonatomic) int displayActionTrigger;
@property (nonatomic) _Bool hasRequiredResourcesAvailable;
@property (nonatomic) unsigned int requiredResourcesAvailable;
@property (nonatomic) _Bool hasTotalTime;
@property (nonatomic) unsigned int totalTime;
@property (nonatomic) _Bool hasRequestedImageCount;
@property (nonatomic) unsigned int requestedImageCount;
@property (nonatomic) _Bool hasRenderedImageCount;
@property (nonatomic) unsigned int renderedImageCount;
@property (nonatomic) _Bool hasMovementDistance;
@property (nonatomic) unsigned int movementDistance;
@property (nonatomic) _Bool hasMeanImageSpacing;
@property (nonatomic) double meanImageSpacing;
@property (nonatomic) _Bool hasDisplayEvent;
@property (nonatomic) int displayEvent;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)displayActionTriggerAsString:(int)arg1;
- (int)StringAsDisplayActionTrigger:(id)arg1;
- (id)displayEventAsString:(int)arg1;
- (int)StringAsDisplayEvent:(id)arg1;

@end
