/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@interface NTKEnumeratedEditOption : NTKValueEditOption

@property (nonatomic, readonly) unsigned long long _value;

+ (unsigned long long)numberOfOptionsForDevice:(id)arg1;
+ (id)optionAtIndex:(unsigned long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)indexOfOption:(id)arg1 forDevice:(id)arg2;
+ (_Bool)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)optionsRestrictedByDevice:(id)arg1;

@end
