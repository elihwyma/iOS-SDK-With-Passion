/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarSystemNavigationItemView.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView

{
    UISystemNavigationAction *_systemNavigationAction;
    NSString *_destinationText;
}

@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction;
@property (retain, nonatomic) NSString *destinationText;

- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (void)userDidActivateButton:(id)arg1;
- (id)_displayStringFromURL:(id)arg1;
- (id)_nominalTitleWithDestinationText:(id)arg1;
- (_Bool)layoutImageOnTrailingEdge;

@end
