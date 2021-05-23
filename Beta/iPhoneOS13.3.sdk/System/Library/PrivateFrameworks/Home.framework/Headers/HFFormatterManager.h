/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSFormatter;

@protocol HFTemperatureFormatter;

@interface HFFormatterManager : NSObject

{
    NSFormatter<HFTemperatureFormatter> *_temperatureFormatter;
}

+ (id)sharedInstance;

- (id)percentFormatter;
- (id)temperatureFormatter;
- (id)booleanFormatter;
- (void)registerTemperatureFormatter:(id)arg1;
- (id)timeIntervalFormatter;
- (id)arcDegreeFormatter;
- (id)luxFormatter;
- (id)identityFormatter;
- (id)emptyStringFormatter;

@end
