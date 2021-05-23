/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSABaseApplicationDelegate.h>

@interface TSAApplicationDelegate : TSABaseApplicationDelegate

{
    _Bool _terminating;
    _Bool _inBackground;
    _Bool _activating;
    CDUnknownBlockType _alertCompletionBlock;
    _Bool _hasNotifiedEnterBackground;
}

@property (copy, nonatomic) CDUnknownBlockType alertCompletionBlock;
@property (getter=isInBackground) _Bool inBackground;
@property (getter=isActivating) _Bool activating;
@property (getter=isTerminating) _Bool terminating;
@property _Bool hasNotifiedEnterBackground;

+ (id)sharedDelegate;

- (id)init;
- (void)dealloc;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (_Bool)centerOnInitialSelection;
- (void)persistenceError:(id)arg1;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)noDocumentsImagePath;
- (id)image32IconForTXTFiles;
- (id)stringForImportingDocument;

@end
