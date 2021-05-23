/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface BFFLinkHandler : NSObject

{
    UIButton *_button;
    CDUnknownBlockType _handler;
}

@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) CDUnknownBlockType handler;

- (id)init;
- (void)buttonPressed:(id)arg1;

@end
