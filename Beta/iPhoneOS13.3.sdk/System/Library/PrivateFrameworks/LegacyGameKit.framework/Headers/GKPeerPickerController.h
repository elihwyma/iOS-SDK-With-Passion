/*
 Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

#import <Foundation/NSObject.h>

@class GKPeerPickerViewController;

@protocol GKPeerPickerControllerDelegate;

@interface GKPeerPickerController : NSObject

{
    id _picker;
}

@property (nonatomic, readonly) GKPeerPickerViewController *pickerViewController;
@property (nonatomic) unsigned long long connectionTypesMask;
@property (nonatomic) id <GKPeerPickerControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)show;
- (void)dismiss;
- (void)_createPicker;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned long long)arg2;
- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned long long)arg2;

@end
