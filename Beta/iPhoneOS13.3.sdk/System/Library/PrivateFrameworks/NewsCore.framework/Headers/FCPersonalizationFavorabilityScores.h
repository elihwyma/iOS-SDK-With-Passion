/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NTPBPublisherFavorabilityScores;

@interface FCPersonalizationFavorabilityScores : NSObject <Swift>

{
    NTPBPublisherFavorabilityScores *_pbFavorabilityScores;
    NSDictionary *_tagIDToScores;
}

@property (retain, nonatomic) NSDictionary *tagIDToScores;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBFavorabilityScores:(id)arg1;
- (id)scoreForTagID:(id)arg1;

@end
