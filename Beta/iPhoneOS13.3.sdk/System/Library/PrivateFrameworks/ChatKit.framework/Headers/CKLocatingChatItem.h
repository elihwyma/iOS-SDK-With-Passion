/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (copy, nonatomic, readonly) NSString *locationText;

- (id)description;
- (id)time;
- (id)message;
- (id)sender;
- (_Bool)failed;
- (_Bool)isFromMe;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;

@end
