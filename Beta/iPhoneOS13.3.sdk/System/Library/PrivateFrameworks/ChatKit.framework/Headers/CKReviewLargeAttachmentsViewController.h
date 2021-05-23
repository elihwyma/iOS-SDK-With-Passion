/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAbstractReviewViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CKReviewLargeAttachmentsViewController : CKAbstractReviewViewController <Swift>

{
    NSArray *_attachments;
}

@property (retain, nonatomic) NSArray *attachments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)previewControllerDidDismiss:(id)arg1;
- (struct NSString *)attachmentClass;
- (id)navigationBarTitle;
- (id)tableViewCellReuseIdentifier;
- (Class)tableViewCellClass;
- (void)reloadModelData;
- (unsigned long long)numberOfModelObjects;
- (id)modelObjectAtIndex:(unsigned long long)arg1;
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;
- (void)_populateAttachmentData;
- (id)_previewItem;

@end
