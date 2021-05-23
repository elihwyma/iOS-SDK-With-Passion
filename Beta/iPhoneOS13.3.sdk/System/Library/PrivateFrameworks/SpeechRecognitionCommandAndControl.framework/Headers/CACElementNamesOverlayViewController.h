/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class NSArray;

@interface CACElementNamesOverlayViewController : UIViewController

@property (retain, nonatomic) NSArray *items;
@property (nonatomic, readonly) long long zOrder;
@property (nonatomic, readonly) _Bool isOverlay;

- (void)loadView;
- (_Bool)_canShowWhileLocked;

@end
