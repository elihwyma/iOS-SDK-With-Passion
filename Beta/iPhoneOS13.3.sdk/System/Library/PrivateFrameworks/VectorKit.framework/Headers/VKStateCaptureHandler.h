/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKStateCaptureHandler : NSObject

{
    NSString *_name;
    unsigned long long _handle;
    function_12bcdede _callback;
}

+ (struct os_state_data_s *)stateDataForDictionary:(id)arg1 title:(id)arg2;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withCallback:(function_12bcdede)arg3;
- (void)_registerHandlerforStateCapture:(id)arg1;
- (void)_unregisterHandlerforStateCapture;
- (struct os_state_data_s *)_stateCapture;

@end
