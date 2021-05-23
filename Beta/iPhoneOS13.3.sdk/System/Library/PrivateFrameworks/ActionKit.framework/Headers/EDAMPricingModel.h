/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMPricingModel : FATObject

{
    NSNumber *_gnomeActive;
    NSNumber *_gnomeWarmingPeriod;
    NSNumber *_pricingModelStart;
}

@property (retain, nonatomic) NSNumber *gnomeActive;
@property (retain, nonatomic) NSNumber *gnomeWarmingPeriod;
@property (retain, nonatomic) NSNumber *pricingModelStart;

+ (id)structName;
+ (id)structFields;

@end
