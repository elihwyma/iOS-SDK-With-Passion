/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface CKSpeakerButton : UIButton

{
    BOOL _orientation;
    _Bool _speakerEnabled;
    _Bool _shouldShowText;
}

@property (nonatomic) _Bool shouldShowText;
@property (nonatomic) BOOL orientation;
@property (nonatomic, getter=isSpeakerEnabled) _Bool speakerEnabled;

+ (id)speakerImageWithOrientation:(BOOL)arg1 speakerEnabled:(_Bool)arg2 shouldShowText:(_Bool)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchUpInside:(id)arg1;
- (void)updateSpeakerImage;
- (void)hideSpeakerText;

@end
