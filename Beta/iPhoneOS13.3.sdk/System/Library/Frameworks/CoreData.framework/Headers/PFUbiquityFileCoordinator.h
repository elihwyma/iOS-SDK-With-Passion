/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSFileCoordinator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityFileCoordinator : NSFileCoordinator

{
    NSString *_localPeerID;
}

@property (nonatomic, readonly) NSString *localPeerID;

+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1;

- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1;
- (_Bool)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 retryOnError:(_Bool)arg3 error:(id *)arg4 byAccessor:(CDUnknownBlockType)arg5;
- (_Bool)shouldRetryForError:(id)arg1 ignoreFile:(_Bool *)arg2;

@end
