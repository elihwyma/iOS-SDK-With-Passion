/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CKAttachmentSaver : NSObject

{
    unsigned long long _errorCount;
    NSMutableArray *_attachments;
}

- (void)_pop;
- (void)_saveNextAttachment;
- (void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void *)arg3;
- (void)popAndSaveNextAttachment;
- (void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void *)arg3;
- (void)_saveCompletion:(id)arg1;
- (id)initWithAttachments:(id)arg1;
- (void)runToCompletion;

@end
