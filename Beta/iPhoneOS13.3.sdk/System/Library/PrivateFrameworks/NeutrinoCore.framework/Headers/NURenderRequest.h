/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSArray, NSString, NUComposition, NUPriority, NURenderContext;

@protocol NUDevice, OS_dispatch_queue;

@interface NURenderRequest : NSObject <Swift>

{
    long long _requestNumber;
    long long _copiedFromRequestNumber;
    long long _parentRequestNumber;
    long long _sampleMode;
    NSArray *_pipelineFilters;
    id <NUDevice> _device;
    NSString *_name;
    NUPriority *_priority;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NURenderContext *_renderContext;
    NUComposition *_internalComposition;
    double _submitTime;
    CDUnknownBlockType _completionBlock;
    id _voucher;
    CDStruct_1b6d18a9 _time;
}

@property (copy, nonatomic, readonly) NSString *additionalDebugInfo;
@property (copy) NUComposition *internalComposition;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property double submitTime;
@property (copy) CDUnknownBlockType completionBlock;
@property (retain) id voucher;
@property (copy, nonatomic) NUComposition *composition;
@property (nonatomic) long long sampleMode;
@property (copy, nonatomic) NSArray *pipelineFilters;
@property (retain, nonatomic) id <NUDevice> device;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NUPriority *priority;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (retain, nonatomic) NURenderContext *renderContext;
@property _Bool shouldCoalesceUpdates;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithComposition:(id)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (void)takePropertiesFromRequest:(id)arg1;
- (void)submitGeneric:(CDUnknownBlockType)arg1;
- (void)submitGenericConfiguringRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)submitGenericSynchronous:(out id *)arg1;
- (void)introspectPrepare:(CDUnknownBlockType)arg1;

@end
