/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAttachmentsSearchController.h>

@class CKAttachmentSearchResultCell;

@interface CKDetailsAttachmentsSearchController : CKAttachmentsSearchController

{
    CKAttachmentSearchResultCell *_sizingCell;
}

@property (retain, nonatomic) CKAttachmentSearchResultCell *sizingCell;

+ (id)sectionIdentifier;

- (id)layoutGroupWithEnvironment:(id)arg1;

@end
