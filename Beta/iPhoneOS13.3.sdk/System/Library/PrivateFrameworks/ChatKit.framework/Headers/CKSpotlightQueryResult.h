/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKConversation, CSSearchableItem, LPLinkMetadata, NSString, NSURL;

@interface CKSpotlightQueryResult : NSObject

{
    NSString *_identifier;
    CSSearchableItem *_item;
    CKConversation *_conversation;
    LPLinkMetadata *_linkMetadata;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CSSearchableItem *item;
@property (retain, nonatomic) CKConversation *conversation;
@property (nonatomic, readonly) NSString *messageGUID;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

- (id)initWithSearchableItem:(id)arg1 inSection:(id)arg2 withConversation:(id)arg3;

@end
