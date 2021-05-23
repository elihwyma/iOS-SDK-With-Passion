/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface USWebUsageReport : NSObject

{
    NSString *_domainIdentifier;
    double _totalUsageTime;
    NSDictionary *_webUsageByDomain;
}

@property (copy, readonly) NSString *domainIdentifier;
@property (readonly) double totalUsageTime;
@property (copy, readonly) NSDictionary *webUsageByDomain;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3;
- (void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3;

@end
