/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIViewController.h>

@class NSExtensionContext, NSString;

@interface AUViewController : UIViewController

{
    NSExtensionContext *_context;
}

@property NSExtensionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)arg1;

@end
