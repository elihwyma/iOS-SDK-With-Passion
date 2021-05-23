/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATOperation, CATOperationQueue, CATTaskClient, NSString;

@protocol CRKToolCommandDelegate, OS_dispatch_source;

@interface CRKToolCommand : NSObject

{
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
    _Bool _printJSON;
    _Bool _printVerbose;
    id <CRKToolCommandDelegate> _delegate;
    NSString *_sessionIdentifier;
}

@property (nonatomic, getter=shouldPrintJSON) _Bool printJSON;
@property (nonatomic, getter=shouldPrintVerbose) _Bool printVerbose;
@property (weak, nonatomic) id <CRKToolCommandDelegate> delegate;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)description;
+ (id)help;
+ (id)aliases;
+ (_Bool)supportsJSON;
+ (_Bool)supportsVerboseOutput;
+ (_Bool)instructorCommand;
+ (void)printHelp;
+ (_Bool)handlesProgress;
+ (id)subcommandPath;

- (id)init;
- (void)executeOperation:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (id)transportProvider;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)remoteTaskDidFinish:(id)arg1;
- (void)runWithClient:(id)arg1 arguments:(id)arg2;
- (void)connectToTaskClientWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)operationWithClient:(id)arg1 arguments:(id)arg2;
- (id)arrayByParsingAndRemovingArgumentFlags:(id)arg1;
- (id)requestWithArguments:(id)arg1;
- (void)_remoteTaskDidProgress:(id)arg1;
- (void)_remoteTaskDidFinish:(id)arg1;
- (void)remoteTaskDidProgress:(id)arg1;
- (void)cleanupAndExitIfNeeded;
- (_Bool)isCommandFinished;
- (_Bool)didCommandSucceed;
- (_Bool)didOperationSucceed:(id)arg1;
- (void)runWithArguments:(id)arg1;

@end
