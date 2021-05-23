/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

{
    id <IMDMessagePTaskStore> _pTaskStore;
    NSTimer *_processingTimer;
}

@property (retain, nonatomic) id <IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (id)init;
- (void)dealloc;
- (void)messageProcessingTaskAdded:(id)arg1;
- (id)initWithMessagesPTaskStore:(id)arg1;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)arg1;
- (void)_processingTimerFired;
- (void)_indexSpotlightIfNeedForPTask:(id)arg1;
- (_Bool)_pref_IMDCoreSpotlightHasMigrated;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg1;
- (void)scheduleInitialProcessingCheck;

@end
