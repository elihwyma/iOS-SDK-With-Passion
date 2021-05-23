/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

#import <Foundation/NSObject.h>

@protocol FLSpecifierTapHandlerDelegate;

@interface FLSpecifierTapHandler : NSObject

{
    id <FLSpecifierTapHandlerDelegate> _delegate;
}

@property (weak, nonatomic) id <FLSpecifierTapHandlerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
