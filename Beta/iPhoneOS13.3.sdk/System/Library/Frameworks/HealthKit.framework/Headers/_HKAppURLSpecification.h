/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface _HKAppURLSpecification : NSObject

+ (_Bool)isClinicalOnboardingURL:(id)arg1;
+ (_Bool)isClinicalLoginRedirectURL:(id)arg1;
+ (_Bool)parseClinicalOnboardingURL:(id)arg1 resultHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
+ (_Bool)parseClinicalLoginRedirectURL:(id)arg1 resultHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isAtrialFibrillationEventURL:(id)arg1;
+ (_Bool)isViewHealthRecordsURL:(id)arg1;
+ (_Bool)isHealthRecordsProviderSearchURL:(id)arg1;

@end
