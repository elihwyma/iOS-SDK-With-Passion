/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PHResourceAvailabilityRequestManager : NSObject

{
    struct os_unfair_lock_s _requestsLock;
    NSMutableDictionary *_requestsByIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)resourceRepairRequest:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)_registerRequest:(id)arg1;
- (void)_unregisterRequestForTaskIdentifier:(id)arg1;
- (void)_unregisterRequest:(id)arg1;
- (id)_requestWithTaskIdentifier:(id)arg1;
- (void)_availabilityRequestDidFinish:(id)arg1;

@end
