/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMChangeToken.h>

@class NSPersistentHistoryToken;

@interface REMNSPersistentHistoryToken : REMChangeToken

{
    NSPersistentHistoryToken *_token;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *token;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compareToken:(id)arg1 error:(id *)arg2;
- (id)initWithPersistentHistoryToken:(id)arg1;

@end
