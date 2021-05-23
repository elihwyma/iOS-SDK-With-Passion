/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXEndCallAction : CXCallAction

{
    NSDate *_dateEnded;
}

@property (copy, nonatomic) NSDate *dateEnded;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)fulfillWithDateEnded:(id)arg1;
- (void)updateAsFulfilledWithDateEnded:(id)arg1;

@end
