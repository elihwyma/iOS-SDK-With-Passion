/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HFPowerStateTargetValueTuple : NSObject

{
    NSString *_characteristicType;
    NSNumber *_onTargetValue;
    NSNumber *_offTargetValue;
}

@property (nonatomic, readonly) NSString *characteristicType;
@property (nonatomic, readonly) NSNumber *onTargetValue;
@property (nonatomic, readonly) NSNumber *offTargetValue;

+ (id)fanStateTargetValueTuple;

- (id)init;
- (id)initWithCharacteristicType:(id)arg1 onTargetValue:(id)arg2 offTargetValue:(id)arg3;
- (id)targetValueForPrimaryState:(long long)arg1;
- (long long)primaryStateForTargetValue:(id)arg1;

@end
