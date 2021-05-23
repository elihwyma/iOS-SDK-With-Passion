/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface TIRequestedInputModes : NSObject

{
    _Bool _didLoad;
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_inputModesByDate;
}

+ (id)defaultDatabaseURL;

- (id)init;
- (id)initWithURL:(id)arg1;
- (void)_loadIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveInputModes;
- (id)_inputModes;
- (void)_inputModes:(CDUnknownBlockType)arg1;
- (void)_addInputMode:(id)arg1 date:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_removeInputModesBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removeAllInputModes:(CDUnknownBlockType)arg1;
- (void)inputModes:(CDUnknownBlockType)arg1;
- (void)addInputMode:(id)arg1 date:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)removeInputModesBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeAllInputModes:(CDUnknownBlockType)arg1;

@end
