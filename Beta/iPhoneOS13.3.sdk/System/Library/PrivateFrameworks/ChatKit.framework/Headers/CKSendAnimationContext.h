/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CABackdropLayer, NSArray, NSString, UIView;

@interface CKSendAnimationContext : NSObject

{
    _Bool _shouldRepeat;
    _Bool _isSender;
    NSArray *_animatableViews;
    NSArray *_animatableTextViews;
    NSString *_impactIdentifier;
    NSArray *_throwBalloonViews;
    UIView *_containerView;
    NSArray *_framesOfAddedChatItems;
    CABackdropLayer *_backdropLayer;
    NSArray *_messages;
    NSArray *_throwBalloonViewAttributesCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *animatableViews;
@property (copy, nonatomic) NSArray *animatableTextViews;
@property (copy, nonatomic) NSArray *throwBalloonViews;
@property (copy, nonatomic) NSArray *framesOfAddedChatItems;
@property (copy, nonatomic) NSArray *throwBalloonViewAttributesCollection;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSString *impactIdentifier;
@property (nonatomic) _Bool shouldRepeat;
@property (nonatomic) _Bool isSender;
@property (retain, nonatomic) NSArray *messages;
@property (retain, nonatomic) CABackdropLayer *backdropLayer;

@end
