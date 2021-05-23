/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEORPFeedbackRequestParameters, GEORPProblem, NSString;

@interface MKWalletRAPReport : NSObject

{
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    GEORPFeedbackRequestParameters *_requestParameters;
    GEORPProblem *_problem;
}

@property (copy, nonatomic) NSString *merchantAdamId;
@property (nonatomic, readonly) GEORPFeedbackRequestParameters *requestParameters;
@property (copy, nonatomic) NSString *reportersComment;
@property (copy, nonatomic) NSString *correlationId;
@property (nonatomic, readonly) GEORPProblem *problem;

- (id)initForMerchantIssue:(unsigned long long)arg1 merchantIndustryCode:(long long)arg2 mapsIdentifier:(unsigned long long)arg3 merchantName:(id)arg4 merchantRawName:(id)arg5 merchantIndustryCategory:(id)arg6 merchantURL:(id)arg7 merchantFormattedAddress:(id)arg8 transactionTime:(double)arg9 transactionType:(id)arg10 transactionLocation:(CDStruct_c3b9c2ee)arg11;

@end
