/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@class CXHandoffContext, NSDate;

@interface CXPullCallAction : CXCallAction

{
    CXHandoffContext *_handoffContext;
    NSDate *_dateConnected;
}

@property (copy, nonatomic) NSDate *dateConnected;
@property (retain, nonatomic) CXHandoffContext *handoffContext;

+ (_Bool)supportsSecureCoding;
+ (double)timeout;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (void)fulfillWithDateConnected:(id)arg1;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;

@end
