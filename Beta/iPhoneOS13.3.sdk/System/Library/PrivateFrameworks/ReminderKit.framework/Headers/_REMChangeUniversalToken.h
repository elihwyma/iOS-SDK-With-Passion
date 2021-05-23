/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMChangeToken.h>

@interface _REMChangeUniversalToken : REMChangeToken

+ (_Bool)supportsSecureCoding;
+ (id)universalToken;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compareToken:(id)arg1 error:(id *)arg2;
- (_Bool)isUniversal;

@end
