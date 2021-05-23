/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class CoreThemeDocument, NSConditionLock, NSMutableArray, TDLogger;

@protocol OS_dispatch_group;

@interface TDRenditionsDistiller : NSObject

{
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *psiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    _Bool shouldCompressCSIDataFlag;
    _Bool noMoreCSIDataInfo;
    _Bool noMoreRenditions;
    NSObject<OS_dispatch_group> *_group;
    TDLogger *_logger;
}

@property (retain) TDLogger *logger;

- (void)dealloc;
- (void)waitUntilFinished;
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(_Bool)arg2;
- (void)detachDistillationThread;
- (void)enqueueAbortFlag;
- (void)enqueueRenditionSpec:(id)arg1;
- (void)enqueueLastRenditionFlag;
- (id)nextCSIDataInfoFromQueue;
- (void)_distill:(id)arg1;
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;
- (void)_enqueueOnOutQueueTheObject:(id)arg1;
- (id)_nextObjectFromInQueue;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueCSIDataInfo:(id)arg1;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueOnInQueueTheObject:(id)arg1;

@end
