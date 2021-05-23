/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@interface FMStateCapture : NSObject

{
    CDUnknownBlockType _stateCaptureBlock;
    unsigned long long _handle;
}

@property (nonatomic) unsigned long long handle;
@property (copy, nonatomic) CDUnknownBlockType stateCaptureBlock;

- (id)init;
- (void)dealloc;
- (struct os_state_data_s *)_stateCapture;
- (struct os_state_data_s *)stateDataForDictionary:(id)arg1 title:(id)arg2;
- (void)registerHandlerforStateCapture;
- (void)unregisterHandlerforStateCapture;

@end
