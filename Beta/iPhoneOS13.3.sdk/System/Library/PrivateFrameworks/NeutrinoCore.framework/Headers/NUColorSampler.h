/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString, NUColorSpace, NUComposition, NUImageDataRequest;

@protocol OS_dispatch_queue;

@interface NUColorSampler : NSObject

{
    _Bool _shouldCoalesceUpdates;
    NUComposition *_composition;
    NSObject<OS_dispatch_queue> *_responseQueue;
    long long _sampleRadius;
    NUColorSpace *_colorSpace;
    NSString *_name;
    NUImageDataRequest *_request;
}

@property (nonatomic, readonly) NUImageDataRequest *request;
@property (copy, nonatomic) NUComposition *composition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic) long long sampleRadius;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) _Bool shouldCoalesceUpdates;
@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (void)cancel;
- (id)initWithComposition:(id)arg1;
- (id)_pipelineFilters;
- (id)initWithComposition:(id)arg1 responseQueue:(id)arg2;
- (void)sampleColorAt:(CDStruct_912cb5d2)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureRequest:(id)arg1 forSamplingAtPoint:(CDStruct_912cb5d2)arg2;

@end
