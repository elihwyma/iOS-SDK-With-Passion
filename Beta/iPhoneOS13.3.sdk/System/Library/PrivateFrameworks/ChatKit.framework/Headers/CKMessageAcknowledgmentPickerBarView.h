/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarView : UIView

{
    CALayer *_anchorBubble;
    CALayer *_intermediateBubble;
    UIView *_pillBubble;
    NSDictionary *_groupAcknowledgmentCounts;
    long long _selectedAcknowledgment;
    BOOL _balloonOrientation;
    NSArray *_acknowledgmentViews;
    struct CGPoint _anchorBubblePosition;
}

@property (nonatomic) struct CGPoint anchorBubblePosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *acknowledgmentViews;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3;
- (void)performShowAnimation:(CDUnknownBlockType)arg1;
- (void)performSendAnimation:(CDUnknownBlockType)arg1;
- (void)performCancelAnimation:(CDUnknownBlockType)arg1;
- (void)updateDynamicColorsForBubbleLayers;
- (struct CGSize)_ackViewsBoundsWidth;
- (void)performSelectedAnimation:(CDUnknownBlockType)arg1;
- (_Bool)_hasGroupCounts;

@end
