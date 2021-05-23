/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@class NSString, UIColor;

@protocol CKMessageAcknowledgment <Swift>

@property (nonatomic, readonly) long long messageAcknowledgmentType;
@property (nonatomic, readonly) UIColor *acknowledgmentImageColor;
@property (nonatomic, readonly) NSString *acknowledgmentImageName;
@property (nonatomic, readonly) UIColor *selectedAcknowledgmentImageColor;
@property (nonatomic, readonly) UIColor *selectedBalloonColor;

@end
