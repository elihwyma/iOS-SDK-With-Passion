/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageBalloonView.h>

@class NSString;

@interface CKInlineStickerBalloonView : CKImageBalloonView

@property (retain, nonatomic) NSString *stickerAccessibilityDescription;

- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (void)setHasTail:(_Bool)arg1;
- (void)setTailMask:(id)arg1;
- (void)setOutlineMask:(id)arg1;
- (void)configureForMessagePart:(id)arg1;

@end
