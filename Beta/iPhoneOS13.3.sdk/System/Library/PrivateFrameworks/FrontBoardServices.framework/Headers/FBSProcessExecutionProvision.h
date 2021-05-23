/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSError, NSString;

@protocol FBSProcessExecutionProvisionDelegate, FBSProcessInternal, OS_dispatch_queue;

@interface FBSProcessExecutionProvision : NSObject <Swift>

{
    id <FBSProcessInternal> _process;
    _Bool _activated;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
    _Bool _monitoring;
    _Bool _violated;
    NSError *_error;
    id <FBSProcessExecutionProvisionDelegate> _delegate;
}

@property (weak, nonatomic) id <FBSProcessExecutionProvisionDelegate> delegate;
@property (weak, nonatomic, readonly) id <FBSProcessInternal> process;
@property (nonatomic, readonly, getter=isMonitoring) _Bool monitoring;
@property (nonatomic, readonly, getter=isViolated) _Bool violated;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareForReuse;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)stopMonitoring;
- (void)monitorProcess:(id)arg1;
- (void)_beginMonitoring;
- (void)_updateProgress;
- (void)_stopMonitoring;
- (void)_prepareForReuse;
- (void)_performDelegateCallout:(CDUnknownBlockType)arg1;
- (void)updateProgress;
- (void)_noteViolatedWithError:(id)arg1;
- (_Bool)isResourceProvision;

@end
