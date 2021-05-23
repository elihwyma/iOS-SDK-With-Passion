/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIContextMenuAnimator : NSObject <Swift>

{
    long long _preferredCommitStyle;
    UIViewController *_previewViewController;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

@property (nonatomic, readonly) _Bool hasAnyActions;
@property (retain, nonatomic) NSMutableArray *animations;
@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *previewViewController;
@property (nonatomic) long long preferredCommitStyle;

+ (id)animatorWithViewController:(id)arg1;

- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)performAllAnimations;
- (void)performAllCompletions;

@end
