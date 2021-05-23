/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFActionBuilder.h>

@class HMCharacteristic, HMCharacteristicWriteAction;

@protocol NSCopying;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder

{
    HMCharacteristic *_characteristic;
    id <NSCopying> _targetValue;
}

@property (nonatomic, readonly) HMCharacteristicWriteAction *action;
@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (retain, nonatomic) id <NSCopying> targetValue;

+ (Class)homeKitRepresentationClass;

- (_Bool)requiresDeviceUnlock;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitItem;
- (id)createNewAction;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (id)copyForCreatingNewAction;
- (_Bool)hasSameTargetAsAction:(id)arg1;
- (id)performValidation;

@end
