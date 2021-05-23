/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _CPImagesUsagePropensity : PBCodable

{
    float _zkw;
    float _recentResult;
    float _other;
    float _querySuggestion;
    float _image;
    int _totalEngagements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float zkw;
@property (nonatomic) float recentResult;
@property (nonatomic) float other;
@property (nonatomic) float querySuggestion;
@property (nonatomic) float image;
@property (nonatomic) int totalEngagements;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
