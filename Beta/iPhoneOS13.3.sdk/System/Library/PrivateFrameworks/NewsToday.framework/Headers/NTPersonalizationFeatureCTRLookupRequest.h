/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class FCPersonalizationFeature;

@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <Swift>

{
    FCPersonalizationFeature *_personalizationFeature;
    double _clickPrior;
    double _impressionPrior;
}

@property (copy, nonatomic) FCPersonalizationFeature *personalizationFeature;
@property (nonatomic) double clickPrior;
@property (nonatomic) double impressionPrior;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
