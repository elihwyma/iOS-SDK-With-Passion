/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMapTable, NSObject, NSString, VCPHomeKitAnalysisService;

@protocol OS_dispatch_queue;

@interface HMIAnalysisService : HMFObject

{
    _Bool _runRemotely;
    int _nextRequestID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFUnfairLock *_lock;
    NSMapTable *_requests;
    VCPHomeKitAnalysisService *_analysisService;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property int nextRequestID;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) NSMapTable *requests;
@property (retain, nonatomic) VCPHomeKitAnalysisService *analysisService;
@property _Bool runRemotely;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (int)requestAnalysisForService:(id)arg1 assetData:(id)arg2 properties:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (id)init;
- (_Bool)cancelRequest:(int)arg1;
- (id)expectedClasses;
- (int)requestAnalysisForAssetData:(id)arg1 withProperties:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (int)getNextRequestID;
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer *)arg1 withProperties:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;

@end
