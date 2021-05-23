/*
 Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface gbtClassifierOutput : NSObject

{
    long long _wait_to_charge;
    NSDictionary *_classProbability;
}

@property (nonatomic) long long wait_to_charge;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithWait_to_charge:(long long)arg1 classProbability:(id)arg2;

@end
