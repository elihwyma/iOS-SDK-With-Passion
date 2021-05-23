/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKConfigurationSource, OS_dispatch_queue;

@interface CRKStudentdXPCProfileConfigurationSource : NSObject

{
    NSObject<OS_dispatch_queue> *mCallbackQueue;
    id <CRKConfigurationSource> mPlaceholderFileConfigurationSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCallbackQueue:(id)arg1;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (_Bool)isStudentdInstalled;
- (id)studentDaemonConnection;

@end
