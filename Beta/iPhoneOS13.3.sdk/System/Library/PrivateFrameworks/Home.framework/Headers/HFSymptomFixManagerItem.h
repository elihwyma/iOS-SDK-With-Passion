/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMAccessory, HMSymptom, HMSymptomFixSession;

@interface HFSymptomFixManagerItem : NSObject

{
    HMSymptom *_symptom;
    HMSymptomFixSession *_fixSession;
    HMAccessory *_accessory;
}

@property (nonatomic, readonly) HMSymptom *symptom;
@property (nonatomic, readonly) HMSymptomFixSession *fixSession;
@property (nonatomic, readonly) HMAccessory *accessory;

- (id)description;
- (id)initWithSymptom:(id)arg1 fixSession:(id)arg2 accessory:(id)arg3;

@end
