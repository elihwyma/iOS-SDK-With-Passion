/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/PARRequest.h>

@class NSDate, NSString;

@interface PARFlightSearchRequest : PARRequest

{
    NSDate *_date;
    NSString *_flightQuery;
    NSString *_appBundleId;
}

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *flightQuery;
@property (copy, nonatomic) NSString *appBundleId;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)responseClass;
- (unsigned int)nwActivityLabel;

@end
