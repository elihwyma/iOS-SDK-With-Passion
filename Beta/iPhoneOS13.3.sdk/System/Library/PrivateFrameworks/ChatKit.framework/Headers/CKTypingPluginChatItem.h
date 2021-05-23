/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTypingChatItem.h>

@class NSData, NSString;

@interface CKTypingPluginChatItem : CKTypingChatItem

{
    NSString *_plugInBundleID;
    NSData *_typingIndicatorData;
}

@property (copy, nonatomic) NSString *plugInBundleID;
@property (nonatomic, readonly) NSData *typingIndicatorData;

- (id)iconImage;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)indicatorLayer;

@end
