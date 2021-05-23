/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol NUDevice, NUDisplay;

@interface NUPlatform : NSObject

{
    _Bool _supportsAutomaticGraphicsSwitching;
    _Bool _hasHeadlessGPU;
    _Bool _hasExtendedColorDisplay;
    NSString *_name;
    NSArray *_devices;
    id <NUDevice> _integratedDevice;
    id <NUDevice> _discreteDevice;
    id <NUDevice> _headlessDevice;
    id <NUDevice> _cpuDevice;
}

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool supportsAutomaticGraphicsSwitching;
@property (retain, nonatomic) id <NUDevice> integratedDevice;
@property (retain, nonatomic) id <NUDevice> discreteDevice;
@property (nonatomic) _Bool hasHeadlessGPU;
@property (retain, nonatomic) id <NUDevice> headlessDevice;
@property (retain, nonatomic) id <NUDevice> cpuDevice;
@property (nonatomic, readonly) _Bool defaultSupportsLiveVideoRendering;
@property (nonatomic) _Bool hasExtendedColorDisplay;
@property (nonatomic, readonly) id <NUDevice> mainDevice;
@property (nonatomic, readonly) NSArray *displays;
@property (nonatomic, readonly) id <NUDisplay> mainDisplay;
@property (nonatomic, readonly) _Bool supportsLiveVideoRendering;

+ (id)currentPlatform;

- (id)description;
- (id)debugDescription;
- (void)clearCaches;
- (id)deviceForDisplay:(id)arg1;
- (id)displayWithIdentifier:(id)arg1;

@end
