/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKSyncController : NSObject

{
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
    _Bool _restoring;
}

@property (nonatomic, getter=isRestoring) _Bool restoring;

+ (id)sharedInstance;

- (id)init;
- (void)prioritizeAttachmentAtPath:(id)arg1;
- (void)attachmentRestored;
- (void)updateRestoreState;
- (void)postAttachmentRestored;

@end
