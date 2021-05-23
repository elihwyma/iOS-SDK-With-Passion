/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor;

@interface _UIShareParticipantDetails : NSObject <Swift>

{
    NSString *_participantID;
    NSString *_detailText;
    UIColor *_participantColor;
}

@property (copy) NSString *participantID;
@property (copy) NSString *detailText;
@property (copy) UIColor *participantColor;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
