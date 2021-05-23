/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CIDualRedEyeRepairTuning : NSObject

{
    NSDictionary *repairTuning;
    NSDictionary *sessionTuning;
}

@property (retain, nonatomic) NSDictionary *repairTuning;
@property (retain, nonatomic) NSDictionary *sessionTuning;

+ (id)repairParametersForTuning:(unsigned long long)arg1;
+ (id)sessionParametersForTuning:(unsigned long long)arg1;
+ (id)defaultRepairParameters;
+ (id)defaultSessionParameters;

- (void)dealloc;
- (id)initWithTuning:(unsigned long long)arg1;
- (void)setTuningParametersByPortType:(id)arg1 withCameraMetadata:(id)arg2;
- (unsigned long long)tuningFromCameraModel:(id)arg1 portType:(id)arg2;
- (void)updateWithCaptureSetup:(id)arg1 portType:(id)arg2;

@end
