/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <NanoWeatherComplicationsCompanion/NWColorIndex.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWMUltravioletIndexColorIndex : NWColorIndex

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)lastValue;
+ (id)allIndices;
+ (id)indexWithUltravioletIndexValue:(double)arg1 color:(id)arg2;

- (id)initWithUltravioletIndexValue:(double)arg1 color:(id)arg2;

@end
