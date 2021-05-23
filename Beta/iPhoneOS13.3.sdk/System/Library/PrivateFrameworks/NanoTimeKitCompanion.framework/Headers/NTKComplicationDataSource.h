/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockComplications/CLKCComplicationDataSource.h>

@class NTKComplication;

@interface NTKComplicationDataSource : CLKCComplicationDataSource

@property (nonatomic, readonly) NTKComplication *complication;

+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;
+ (Class)dataSourceClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;

- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;

@end
