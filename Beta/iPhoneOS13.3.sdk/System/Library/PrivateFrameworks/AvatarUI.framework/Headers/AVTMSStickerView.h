/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Messages/MSStickerView.h>

@class NSString;

@protocol AVTMSStickerViewDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTMSStickerView : MSStickerView

{
    _Bool _allowsPeel;
    id <AVTMSStickerViewDelegate> _delegate;
    id <AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
}

@property (nonatomic) _Bool allowsPeel;
@property (weak, nonatomic) id <AVTMSStickerViewDelegate> delegate;
@property (weak, nonatomic) id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;

@end
