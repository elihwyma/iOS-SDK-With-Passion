/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HMCharacteristic, NSError, NSSet, NSString;

@interface HFCharacteristicReadResponse : NSObject <Swift>

{
    HMCharacteristic *_characteristic;
    NSSet *_readTraits;
    id _value;
    NSError *_error;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) NSSet *readTraits;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)valueWithExpectedClass:(Class)arg1;
- (id)initWithCharacteristic:(id)arg1 readTraits:(id)arg2 value:(id)arg3 error:(id)arg4;
- (id)initWithHomeKitResponse:(id)arg1 value:(id)arg2 readTraits:(id)arg3;

@end
