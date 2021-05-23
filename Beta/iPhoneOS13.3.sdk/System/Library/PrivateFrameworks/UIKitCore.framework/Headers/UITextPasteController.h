/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol UITextPasteConfigurationSupporting_Internal;

__attribute__((visibility("hidden")))
@interface UITextPasteController : NSObject

{
    NSMapTable *_sessions;
    id <UITextPasteConfigurationSupporting_Internal> _supportingView;
}

@property (weak, nonatomic) id <UITextPasteConfigurationSupporting_Internal> supportingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)combineAttributedStrings:(id)arg1 addingSeparation:(_Bool)arg2;

- (id)initWithSupportingView:(id)arg1;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(_Bool)arg4 delegate:(id)arg5;
- (void)_transformTextPasteItem:(id)arg1;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2 delegate:(id)arg3 matchesTextStyles:(_Bool)arg4;
- (id)_clampRange:(id)arg1;
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;
- (void)_executePasteForSession:(id)arg1;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 forSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_pasteDelegateHandlesPasting;
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(_Bool)arg4;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;
- (void)_restorePasteResultForSession:(id)arg1;

@end
