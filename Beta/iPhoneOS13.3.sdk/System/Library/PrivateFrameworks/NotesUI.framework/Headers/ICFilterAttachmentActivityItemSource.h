/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICFilterAttachmentActivityItemSource : NSObject

{
    id _attachmentItem;
}

@property (retain, nonatomic) id attachmentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)initAttachmentItem:(id)arg1;
- (id)activityItemSourceForSelector:(SEL)arg1;

@end
