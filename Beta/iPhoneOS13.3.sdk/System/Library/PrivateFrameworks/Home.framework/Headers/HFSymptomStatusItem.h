/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFStatusItem.h>

@class HMSymptom;

@interface HFSymptomStatusItem : HFStatusItem

{
    HMSymptom *_symptom;
}

@property (nonatomic, readonly) HMSymptom *symptom;

- (id)_subclass_updateWithOptions:(id)arg1;

@end
