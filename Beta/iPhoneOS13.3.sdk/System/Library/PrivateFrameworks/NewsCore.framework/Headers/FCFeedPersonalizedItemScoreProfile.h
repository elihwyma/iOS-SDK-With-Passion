/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface FCFeedPersonalizedItemScoreProfile : NSObject

{
    double _featureCtr;
    double _paidNonpaidSubscriptionCtr;
    double _subscribedChannelCtr;
    double _autoSubscribeCtr;
    double _computedGlobalScoreCoefficient;
    double _globalScore;
    double _userFeedbackScore;
    double _agedUserFeedbackScore;
    double _personalizationScore;
    double _firstPassPersonalizationScore;
    double _agedPersonalizationScore;
    double _diversifiedPersonalizationScore;
    NSDictionary *_cohortMemberships;
}

@property (nonatomic) double featureCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double globalScore;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double firstPassPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (retain, nonatomic) NSDictionary *cohortMemberships;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
