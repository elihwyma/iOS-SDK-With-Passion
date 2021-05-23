/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSArray, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse

{
    NSArray *_allFeatureApplications;
    NSString *_lastUpdated;
}

@property (nonatomic, readonly) NSArray *allFeatureApplications;
@property (copy, nonatomic, readonly) NSString *lastUpdated;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
