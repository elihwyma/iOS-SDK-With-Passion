/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEAppRule.h>

@class NSNumber;

@interface NEPathRule : NEAppRule

{
    _Bool _denyCellularFallback;
    _Bool _isIdentifierExternal;
    NSNumber *_aggregatePersonalCellular;
    NSNumber *_aggregateEnterpriseCellular;
    long long _internalCellularBehavior;
    NSNumber *_aggregatePersonalWiFi;
    NSNumber *_aggregateEnterpriseWiFi;
    long long _internalWiFiBehavior;
}

@property (retain) NSNumber *aggregatePersonalCellular;
@property (retain) NSNumber *aggregateEnterpriseCellular;
@property long long internalCellularBehavior;
@property (retain) NSNumber *aggregatePersonalWiFi;
@property (retain) NSNumber *aggregateEnterpriseWiFi;
@property long long internalWiFiBehavior;
@property (readonly, getter=isDefaultPathRule) _Bool defaultPathRule;
@property long long cellularBehavior;
@property long long wifiBehavior;
@property _Bool denyCellularFallback;
@property _Bool isIdentifierExternal;

+ (_Bool)supportsSecureCoding;
+ (long long)aggregateNetworkBehavior:(long long)arg1 other:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)supportsCellularBehavior:(long long)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)signingIdentifierAllowed:(id)arg1 domainsRequired:(out _Bool *)arg2;
- (_Bool)isAggregateRule;
- (id)initDefaultPathRule;
- (void)addCellularBehavior:(long long)arg1 grade:(long long)arg2;
- (void)addWiFiBehavior:(long long)arg1 grade:(long long)arg2;
- (_Bool)supportsWiFiBehavior:(long long)arg1;

@end
