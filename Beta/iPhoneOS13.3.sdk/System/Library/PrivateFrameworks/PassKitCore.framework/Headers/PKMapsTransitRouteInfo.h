/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSSet, PKCurrencyAmount;

@interface PKMapsTransitRouteInfo : NSObject <Swift>

{
    NSSet *_transitNetworkIdentifiers;
    PKCurrencyAmount *_cost;
}

@property (nonatomic, readonly) NSSet *transitNetworkIdentifiers;
@property (nonatomic, readonly) PKCurrencyAmount *cost;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitNetworkIdentifiers:(id)arg1 cost:(id)arg2;

@end
