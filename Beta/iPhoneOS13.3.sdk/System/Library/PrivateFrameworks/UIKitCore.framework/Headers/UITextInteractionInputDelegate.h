/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITextInteraction;

__attribute__((visibility("hidden")))
@interface UITextInteractionInputDelegate : NSObject <Swift>

{
    UITextInteraction *_rootInteraction;
}

@property (weak, nonatomic) UITextInteraction *rootInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)textWillChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)selectionDidChange:(id)arg1;

@end
