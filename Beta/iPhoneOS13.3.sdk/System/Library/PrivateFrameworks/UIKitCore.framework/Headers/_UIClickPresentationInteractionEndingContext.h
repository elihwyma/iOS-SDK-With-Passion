/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIClickPresentation;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationInteractionEndingContext : NSObject

{
    _Bool _didComplete;
    unsigned long long _reason;
    _UIClickPresentation *_presentation;
    CDUnknownBlockType _alongsideActions;
    CDUnknownBlockType _completion;
}

@property (nonatomic) _Bool didComplete;
@property (nonatomic) unsigned long long reason;
@property (weak, nonatomic) _UIClickPresentation *presentation;
@property (copy, nonatomic) CDUnknownBlockType alongsideActions;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
