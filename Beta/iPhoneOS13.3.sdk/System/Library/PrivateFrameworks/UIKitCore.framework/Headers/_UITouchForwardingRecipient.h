/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UITouchForwardingRecipient : NSObject

{
    UIResponder *fromResponder;
    UIResponder *responder;
    long long recordedPhase;
    long long autocompletedPhase;
}

@property (weak, nonatomic) UIResponder *fromResponder;
@property (weak, nonatomic) UIResponder *responder;
@property (nonatomic) long long recordedPhase;
@property (nonatomic) long long autocompletedPhase;

- (id)description;
- (id)initWithResponder:(id)arg1 fromResponder:(id)arg2;

@end
