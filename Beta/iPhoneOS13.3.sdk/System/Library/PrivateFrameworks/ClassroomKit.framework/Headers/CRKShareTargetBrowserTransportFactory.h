/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@interface CRKShareTargetBrowserTransportFactory : NSObject

- (void)makeStudentdTransportWithCompletion:(CDUnknownBlockType)arg1;
- (void)makeInstructordTransportUsingStudentdTaskClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)makeStudentdTransportProvider;
- (id)makeInstructordTransportProviderWithStudentDaemonProxy:(id)arg1;

@end
