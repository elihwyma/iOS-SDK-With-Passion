/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessageAcknowledgmentPickerBarItemView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarItemViewPhone : CKMessageAcknowledgmentPickerBarItemView

{
    CALayer *_selectionLayer;
}

@property (retain, nonatomic) CALayer *selectionLayer;

- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;

@end
