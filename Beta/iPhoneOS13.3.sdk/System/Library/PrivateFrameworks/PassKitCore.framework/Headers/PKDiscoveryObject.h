/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSString, PKDiscoveryRelevantDateRange, PKOSVersionRequirementRange;

@interface PKDiscoveryObject : NSObject <Swift>

{
    NSString *_identifier;
    long long _version;
    NSString *_ruleIdentifier;
    NSArray *_triggers;
    PKOSVersionRequirementRange *_osVersionRange;
    PKDiscoveryRelevantDateRange *_relevantDateRange;
    long long _maxViewCount;
    long long _status;
    long long _viewCount;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *ruleIdentifier;
@property (retain, nonatomic) NSArray *triggers;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (retain, nonatomic) PKDiscoveryRelevantDateRange *relevantDateRange;
@property (nonatomic) long long maxViewCount;
@property (nonatomic) long long status;
@property (nonatomic) long long viewCount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)incrementViewCount;
- (_Bool)isValidForTime:(id)arg1;
- (_Bool)isTerminalStatus;
- (_Bool)hasTriggers;
- (_Bool)updateWithDiscoveryObject:(id)arg1;
- (void)updateForRuleResult:(_Bool)arg1;
- (void)updatedStatusForAction:(long long)arg1;

@end
