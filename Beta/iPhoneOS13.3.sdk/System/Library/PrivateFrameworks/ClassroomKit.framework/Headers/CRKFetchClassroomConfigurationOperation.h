/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CATRemoteTaskOperation, NSDictionary;

@protocol CRKRequestPerformingProtocol;

@interface CRKFetchClassroomConfigurationOperation : CATOperation

{
    id <CRKRequestPerformingProtocol> mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}

+ (id)defaultSourcesByType;

- (id)init;
- (void)run;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 sourcesByType:(id)arg2;
- (void)fetchConfigurationiOS;
- (void)fetchConfigurationOperationDidFinish:(id)arg1;
- (void)fetchConfigurationMacOS;

@end
