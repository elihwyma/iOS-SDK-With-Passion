/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol CRKRequestPerformingProtocol;

@interface CRKStudentdBackedInstructordTransportProvider : NSObject

{
    id <CRKRequestPerformingProtocol> _studentDaemonProxy;
    NSURL *_classroomAppBundleURL;
}

@property (retain, nonatomic) id <CRKRequestPerformingProtocol> studentDaemonProxy;
@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2;
- (void)fetchTransportOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
