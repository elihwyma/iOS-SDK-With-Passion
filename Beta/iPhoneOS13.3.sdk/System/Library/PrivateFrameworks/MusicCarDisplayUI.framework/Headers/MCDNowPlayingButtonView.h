/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface MCDNowPlayingButtonView : UIView

{
    CALayer *_animatedGlyphLayer;
    CAStateController *_stateController;
    NSMutableArray *_barLayers;
    CALayer *_platterLayer;
    _Bool _highlighted;
    NSString *_stateName;
}

@property (copy, nonatomic) NSString *stateName;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)classSubstitions;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_updateColors;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (id)initWithCAML:(id)arg1;

@end
