/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPMetricsUtils : NSObject

+ (id)osBuild;
+ (id)loggingQueue;
+ (struct PPMNamedEntityAlgorithm_)mapNamedEntityAlgorithm:(unsigned long long)arg1;
+ (struct PPMLocationAlgorithm_)mapLocationAlgorithm:(unsigned short)arg1;
+ (struct PPMTopicAlgorithm_)mapTopicAlgorithm:(unsigned long long)arg1;
+ (struct PPMTopicDonationSource_)topicSourceForBundleId:(id)arg1;
+ (struct PPMNamedEntityDonationSource_)namedEntitySourceForBundleId:(id)arg1;
+ (struct PPMLocationDonationSource_)locationSourceForBundleId:(id)arg1;
+ (struct PPMObjectDonationSource_)donationSourceForBundleId:(id)arg1;
+ (struct PPMPortraitFeedbackType_)feedbackTypeForPET:(unsigned int)arg1;
+ (int)feedbackTypeForPET2:(unsigned int)arg1;
+ (struct PPMTypeSafeBool_)typeSafeBoolOfCond:(_Bool)arg1;
+ (id)truncatedClientBundleId:(id)arg1;
+ (id)truncatedClientBundleIdOrCurrentBundleId:(id)arg1;

@end
