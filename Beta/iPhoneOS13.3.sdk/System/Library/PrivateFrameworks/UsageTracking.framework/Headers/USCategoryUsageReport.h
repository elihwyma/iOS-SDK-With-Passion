/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface USCategoryUsageReport : NSObject

{
    NSString *_categoryIdentifier;
    double _totalUsageTime;
    NSArray *_applicationUsage;
    NSArray *_webUsage;
}

@property (copy) NSArray *applicationUsage;
@property (copy, readonly) NSString *categoryIdentifier;
@property (readonly) double totalUsageTime;
@property (copy, readonly) NSArray *webUsage;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategoryIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsage:(id)arg3 webUsage:(id)arg4;
- (void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3;

@end
