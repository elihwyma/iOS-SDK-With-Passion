/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATTaskClient, NSError, NSString;

@protocol CRKTransportProviding;

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject

{
    id <CRKTransportProviding> mTransportProvider;
    CATTaskClient *mTaskClient;
    NSError *mError;
    _Bool mDidAttemptToConnect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)connect;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (id)initWithTransportProvider:(id)arg1;
- (id)operationForRequest:(id)arg1;
- (void)connectIfNeeded;

@end
