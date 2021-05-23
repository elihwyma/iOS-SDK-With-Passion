/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLLazyObject, PLPhotoLibraryBundle;

@interface PLDatabaseContext : NSObject

{
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyHighPriorityTransientLibrary;
    PLLazyObject *_lazyLowPriorityTransientLibrary;
    PLLazyObject *_lazyCplLibrary;
    PLLazyObject *_lazyMomentLibrary;
    PLLazyObject *_lazyNonTransientLibrary;
}

- (void)perform:(CDUnknownBlockType)arg1;
- (id)initWithLibraryBundle:(id)arg1;
- (id)newHighPriorityTransientLibrary;
- (id)highPriorityTransientLibrary;
- (id)newLowPriorityTransientLibrary;
- (id)lowPriorityTransientLibrary;
- (id)transientLibraryWithCurrentQoS;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)performSync:(CDUnknownBlockType)arg1;
- (void)performTransactionSync:(CDUnknownBlockType)arg1;
- (id)newCplLibrary;
- (id)cplLibrary;
- (id)newMomentLibrary;
- (id)momentLibrary;
- (id)newNonTransientLibrary;
- (id)nonTransientLibrary;

@end
