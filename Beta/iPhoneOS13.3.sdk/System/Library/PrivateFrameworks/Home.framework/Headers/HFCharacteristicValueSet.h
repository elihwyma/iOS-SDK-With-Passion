/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface HFCharacteristicValueSet : NSObject

{
    NSMutableSet *_allCharacteristics;
    NSMutableDictionary *_valuesByCharacteristicUUID;
}

@property (nonatomic, readonly) NSSet *allCharacteristics;

- (id)init;
- (void)setValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)valueForCharacteristic:(id)arg1;
- (void)removeValueForCharacteristic:(id)arg1;

@end
