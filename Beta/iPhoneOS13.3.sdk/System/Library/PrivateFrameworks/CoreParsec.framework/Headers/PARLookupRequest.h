/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/PARRequest.h>

@class NSString;

@interface PARLookupRequest : PARRequest

{
    NSString *_queryString;
    NSString *_queryContext;
    NSString *_domain;
    long long _lookupSelectionType;
    NSString *_appBundleId;
}

@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *queryContext;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) long long lookupSelectionType;
@property (copy, nonatomic) NSString *appBundleId;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;

@end
