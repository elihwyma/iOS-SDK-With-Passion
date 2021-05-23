/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface STAceRecorder : NSObject

{
    NSMutableDictionary *_timestampToAceObjs;
    NSMutableArray *_speechLogs;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)_startRecording;
- (void)_finishRecording;
- (void)handleClientCommand:(id)arg1;
- (void)handleServerCommand:(id)arg1;
- (_Bool)_createDirectoryIfNeededWithBaseURL:(id)arg1;
- (id)_libraryURLWithBaseURL:(id)arg1 date:(id)arg2 fileName:(id)arg3;

@end
