/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HFUpdateLogger, NSDictionary;

@protocol HFCharacteristicReadPolicy;

@interface _HFItemUpdateRequestContext : NSObject <Swift>

{
    SEL _senderSelector;
    NSDictionary *_updateOptions;
    HFUpdateLogger *_logger;
    id <HFCharacteristicReadPolicy> _readPolicy;
}

@property (nonatomic) SEL senderSelector;
@property (copy, nonatomic) NSDictionary *updateOptions;
@property (retain, nonatomic) HFUpdateLogger *logger;
@property (retain, nonatomic) id <HFCharacteristicReadPolicy> readPolicy;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
