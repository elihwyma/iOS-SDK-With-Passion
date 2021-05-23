/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMChat, NSArray, NSSet;

@protocol CKAttachmentCollectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CKAttachmentCollectionManager : NSObject

{
    id <CKAttachmentCollectionManagerDelegate> _delegate;
    NSArray *_photosVideosItems;
    NSArray *_webLinksItems;
    NSArray *_otherContentsItems;
    IMChat *_chat;
    NSSet *_photoTransferGUIDs;
}

@property (retain, nonatomic) NSArray *photosVideosItems;
@property (retain, nonatomic) NSArray *webLinksItems;
@property (retain, nonatomic) NSArray *otherContentsItems;
@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) NSSet *photoTransferGUIDs;
@property (weak, nonatomic) id <CKAttachmentCollectionManagerDelegate> delegate;

- (void)dealloc;
- (id)initWithChat:(id)arg1;
- (void)chatItemsChanged:(id)arg1;
- (void)updateCollections;
- (id)initWithChat:(id)arg1 photoTransferGUIDs:(id)arg2;
- (id)guidFromChatItem:(id)arg1;
- (void)deleteAttachmentItems:(id)arg1;

@end
