/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMSymptom, NSError;

@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueDisplayError : NSObject

{
    unsigned long long _category;
    id <HFCharacteristicOperationContextProviding> _contextProvider;
    NSError *_underlyingError;
    HMSymptom *_underlyingSymptom;
}

@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
@property (copy, nonatomic) NSError *underlyingError;
@property (retain, nonatomic) HMSymptom *underlyingSymptom;
@property (nonatomic, readonly, getter=isPersistentError) _Bool persistentError;

+ (id)errorWithUnderlyingError:(id)arg1 readTraits:(id)arg2 contextProvider:(id)arg3;
+ (id)errorWithUnderlyingSymptom:(id)arg1 isFixingCurrently:(_Bool)arg2 contextProvider:(id)arg3;
+ (id)mostEgregiousError:(id)arg1;

@end
