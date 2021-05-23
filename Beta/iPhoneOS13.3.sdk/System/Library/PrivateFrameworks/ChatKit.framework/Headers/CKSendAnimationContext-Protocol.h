/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@class CABackdropLayer, NSArray, NSString, UIView;

@protocol CKSendAnimationContext <Swift>

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
