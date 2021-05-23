/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CSVoiceTriggerDataCollector : NSObject

{
    NSMutableArray *_vteiList;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *vteiList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)_createAndSubmitRejectLoggingDictWithSource:(id)arg1 withPHSAcceptInfo:(id)arg2;
- (void)_filterVTEIArray;
- (void)addPHSRejectEntry:(id)arg1;
- (void)addPHSAcceptEntryAndSubmit:(id)arg1;

@end
