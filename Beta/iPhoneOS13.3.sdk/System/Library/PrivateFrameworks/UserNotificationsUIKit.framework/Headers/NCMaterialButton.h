/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIButton.h>

@class MTVisualStylingProvider, NSArray, NSMutableDictionary, NSString;

@interface NCMaterialButton : UIButton

{
    MTVisualStylingProvider *_visualStylingProvider;
    NSMutableDictionary *_styling;
    NSMutableDictionary *_imageViewStyling;
}

@property (retain, nonatomic) NSMutableDictionary *styling;
@property (retain, nonatomic) NSMutableDictionary *imageViewStyling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *requiredVisualStyleCategories;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)_applyStyling;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)_applyButtonStyling;
- (void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(_Bool)arg2;
- (void)_applyImageViewStyling;
- (void)setStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)setImageViewStyle:(long long)arg1 forState:(unsigned long long)arg2;

@end
