/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSOperationQueue.h>

@interface PLInstrumentedOperationQueue : NSOperationQueue

{
    CDUnknownBlockType _pl_operationCountChangedBlock;
}

@property (copy) CDUnknownBlockType pl_operationCountChangedBlock;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
