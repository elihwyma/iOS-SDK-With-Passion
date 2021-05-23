/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICAttachment, NSString;

@interface ICAttachmentActivityItemSource : NSObject

{
    ICAttachment *_attachment;
}

@property (weak, nonatomic) ICAttachment *attachment;
@property (copy, nonatomic, readonly) NSString *attachmentTypeUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)initWithAttachment:(id)arg1;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;

@end
