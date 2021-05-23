/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class CBALSEvent;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CBALSNodeiOS : NSObject

{
    NSObject<OS_os_log> *_logHandle;
    int _placement;
    float _superFastIntegrationTime;
    float _fastIntegrationTime;
    float _slowIntegrationTime;
    _Bool _colorSupport;
    int _orientation;
    struct __IOHIDServiceClient *_alsService;
    CBALSEvent *_currentALSEvent;
}

@property struct __IOHIDServiceClient *alsService;
@property (retain, nonatomic) CBALSEvent *currentALSEvent;
@property int orientation;

- (void)dealloc;
- (void)initALSProperties;
- (_Bool)isColorSupported;
- (id)initWithALSServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)handleALSEvent:(id)arg1;
- (_Bool)conformsToHIDServiceClient:(struct __IOHIDServiceClient *)arg1;

@end
