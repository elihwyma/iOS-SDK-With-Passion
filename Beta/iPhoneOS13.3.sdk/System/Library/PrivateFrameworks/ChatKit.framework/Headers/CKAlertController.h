/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIAlertController.h>

@class NSArray, NSString;

@protocol CKAlertControllerDelegate;

@interface CKAlertController : UIAlertController

{
    id <CKAlertControllerDelegate> _alertDelegate;
}

@property (weak, nonatomic) id <CKAlertControllerDelegate> alertDelegate;
@property (nonatomic, readonly) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addAction:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)allowsRotation;
- (_Bool)wantsWindowedPresentation;
- (_Bool)preserveModalPresentationStyle;

@end
