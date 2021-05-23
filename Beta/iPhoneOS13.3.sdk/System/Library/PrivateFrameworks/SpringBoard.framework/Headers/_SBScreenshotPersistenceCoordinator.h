/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface _SBScreenshotPersistenceCoordinator : NSObject

{
    unsigned long long _screenshotWriteCount;
}

@property (nonatomic, readonly) _Bool isSaving;

- (void)saveScreenshot:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_isWritingSnapshot;
- (void)_incrementWriteCount;
- (void)_finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void *)arg3;
- (void)_decrementWriteCount;

@end
