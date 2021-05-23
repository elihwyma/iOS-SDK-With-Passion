/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAttachment.h>

@class NSData, NSURL;

@interface REMURLAttachment : REMAttachment

{
    NSURL *_url;
    NSData *_metadata;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *metadata;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 url:(id)arg4 metadata:(id)arg5;

@end
