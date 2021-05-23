/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject <Swift>

{
    NSArray *_policies;
}

@property (nonatomic, readonly) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithPolicies:(id)arg1;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;

@end
