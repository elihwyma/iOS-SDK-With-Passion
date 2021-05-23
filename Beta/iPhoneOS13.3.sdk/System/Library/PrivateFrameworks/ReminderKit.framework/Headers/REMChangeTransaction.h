/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSDate, NSString, REMChangeToken, REMObjectID;

@interface REMChangeTransaction : NSObject <Swift>

{
    NSDate *_timestamp;
    NSArray *_changes;
    REMObjectID *_accountID;
    NSString *_storeID;
    NSString *_author;
    REMChangeToken *_token;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSArray *changes;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *storeID;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) REMChangeToken *token;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
