/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSDate, REMChangeToken;

@interface REMChangeTrackingState : NSObject <Swift>

{
    REMChangeToken *_lastConsumedChangeToken;
    NSDate *_lastConsumedDate;
}

@property (retain, nonatomic) NSDate *lastConsumedDate;
@property (retain, nonatomic) REMChangeToken *lastConsumedChangeToken;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
