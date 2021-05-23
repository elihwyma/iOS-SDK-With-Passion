/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAttachment.h>

@class NSData, NSURL;

@interface REMFileAttachment : REMAttachment

{
    unsigned long long _fileSize;
    NSURL *_fileURL;
    NSData *_data;
}

@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSData *data;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7;

@end
