/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModelField.h>

@class HMFVersion;

@interface HMBMutableModelField : HMBModelField

@property (nonatomic, getter=isOptional) _Bool optional;
@property (nonatomic) unsigned long long loggingVisibility;
@property (retain, nonatomic) id defaultValue;
@property (copy, nonatomic) HMFVersion *readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
