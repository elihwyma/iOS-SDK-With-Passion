/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UITextView.h>

@class MPUTextContainerContentSizeUpdater, NSAttributedString, NSString, UIFont;

@interface UITextView (MPUAdditions)

@property (nonatomic, setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:) _Bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic, readonly) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;

@end
