/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol CRKTransportProviding;

@interface CRKCurrentPlatformInstructordTransportProvider : NSObject

{
    id <CRKTransportProviding> mBaseProvider;
    NSURL *_classroomAppBundleURL;
}

@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2;
- (id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)arg1;

@end
