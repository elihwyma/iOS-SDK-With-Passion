/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIView.h>

#import <ReplayKit/Swift-Protocol.h>

@class NSString, RPBroadcastPickerStandaloneViewController, UIButton;

@interface RPSystemBroadcastPickerView : UIView <Swift>

{
    _Bool _showsMicrophoneButton;
    NSString *_preferredExtension;
    RPBroadcastPickerStandaloneViewController *_broadcastPickerViewController;
    UIButton *_broadcastPickerButton;
}

@property (retain, nonatomic) RPBroadcastPickerStandaloneViewController *broadcastPickerViewController;
@property (retain, nonatomic) UIButton *broadcastPickerButton;
@property (retain, nonatomic) NSString *preferredExtension;
@property (nonatomic) _Bool showsMicrophoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)buttonPressed:(id)arg1;
- (void)viewControllerDidFinish;
- (void)addBroadcastPickerButton;
- (void)screenCaptureChanged;

@end
