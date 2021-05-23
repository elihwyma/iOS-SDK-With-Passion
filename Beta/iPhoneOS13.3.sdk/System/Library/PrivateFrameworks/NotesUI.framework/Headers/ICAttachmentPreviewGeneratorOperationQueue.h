/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperationQueue.h>

@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue

{
    unsigned long long _suspendCount;
}

@property (nonatomic) unsigned long long suspendCount;

- (void)resume;
- (void)suspend;
- (void)cancelOperationsForAttachment:(id)arg1;

@end
