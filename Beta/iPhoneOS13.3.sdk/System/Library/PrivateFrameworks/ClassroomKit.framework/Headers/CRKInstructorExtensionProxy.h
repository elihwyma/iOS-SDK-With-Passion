/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class LSApplicationWorkspace, NSExtension, NSString, NSUUID;

@interface CRKInstructorExtensionProxy : NSObject

{
    LSApplicationWorkspace *mWorkspace;
    NSExtension *mInstructorExtension;
    NSUUID *mContextIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedExtensionProxy;

- (id)init;
- (void)dealloc;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)fetchListenerEndpointFromClassroomBundleWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)beginExtensionRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)configureInstructorExtensionAfterFetchError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resetExtension;
- (void)establishEndpointWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)proxiesContainClassroomApp:(id)arg1;
- (void)fetchListenerEndpointWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
