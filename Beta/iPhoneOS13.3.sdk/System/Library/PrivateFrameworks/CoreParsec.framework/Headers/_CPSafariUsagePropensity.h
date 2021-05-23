/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _CPSafariUsagePropensity : PBCodable

{
    float _localGoto;
    float _localTap;
    float _parsecGoto;
    float _parsecTap;
    float _thirdPartyGoto;
    float _thirdPartyTap;
    float _thirdPartyCompletionOrRecentSearch;
    float _goToSite;
    float _other;
    int _totalEngagements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float localGoto;
@property (nonatomic) float localTap;
@property (nonatomic) float parsecGoto;
@property (nonatomic) float parsecTap;
@property (nonatomic) float thirdPartyGoto;
@property (nonatomic) float thirdPartyTap;
@property (nonatomic) float thirdPartyCompletionOrRecentSearch;
@property (nonatomic) float goToSite;
@property (nonatomic) float other;
@property (nonatomic) int totalEngagements;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
