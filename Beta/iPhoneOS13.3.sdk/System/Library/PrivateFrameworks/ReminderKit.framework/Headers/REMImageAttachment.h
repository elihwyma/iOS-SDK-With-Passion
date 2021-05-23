/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMFileAttachment.h>

@interface REMImageAttachment : REMFileAttachment

{
    unsigned long long _width;
    unsigned long long _height;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 width:(unsigned long long)arg8 height:(unsigned long long)arg9;

@end
