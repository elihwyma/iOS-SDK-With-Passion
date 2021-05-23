/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, LPFileMetadata, LPLinkMetadata, NSString;

__attribute__((visibility("hidden")))
@interface CNShareContactActivityItem : NSObject

{
    CNContact *_contact;
    LPLinkMetadata *_linkMetadata;
    LPFileMetadata *_fileMetadata;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) LPFileMetadata *fileMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)initWithContact:(id)arg1;
- (id)thumbnailImage;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;

@end
