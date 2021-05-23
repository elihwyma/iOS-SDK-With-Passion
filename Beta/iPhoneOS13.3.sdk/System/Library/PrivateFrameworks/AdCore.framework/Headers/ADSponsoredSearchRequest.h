/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest

{
    ADUserTargetingProperties *_properties;
    _Bool _enableImagesForDupes;
    _Bool _isBaseline;
    _Bool _isTest;
    struct {
        unsigned int enableImagesForDupes:1;
        unsigned int isBaseline:1;
        unsigned int isTest:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasProperties;
@property (retain, nonatomic) ADUserTargetingProperties *properties;
@property (nonatomic) _Bool hasIsTest;
@property (nonatomic) _Bool isTest;
@property (nonatomic) _Bool hasIsBaseline;
@property (nonatomic) _Bool isBaseline;
@property (nonatomic) _Bool hasEnableImagesForDupes;
@property (nonatomic) _Bool enableImagesForDupes;

+ (id)options;

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
