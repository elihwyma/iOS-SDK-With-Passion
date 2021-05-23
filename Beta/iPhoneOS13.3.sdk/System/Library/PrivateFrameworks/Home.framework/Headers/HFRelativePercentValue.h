/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSNumber, NSString;

@interface HFRelativePercentValue : NSObject <Swift>

{
    NSNumber *_value;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
}

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)initWithCharacteristicReadResponse:(id)arg1;

@end
