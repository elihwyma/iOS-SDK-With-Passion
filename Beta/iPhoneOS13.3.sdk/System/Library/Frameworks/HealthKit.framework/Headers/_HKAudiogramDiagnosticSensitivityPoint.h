/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HKAudiogramDiagnosticSensitivityPoint : NSObject

{
    double _earSensitivityDBHL;
    double _frequencyHz;
}

@property (nonatomic, readonly) double earSensitivityDBHL;
@property (nonatomic, readonly) double frequencyHz;

- (id)initWithEarSensitivity:(id)arg1 frequency:(id)arg2;

@end
