/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface _CDAttachment : NSObject

{
    NSDate *_creationDate;
    NSString *_uti;
    NSUUID *_identifier;
    NSUUID *_cloudIdentifier;
    NSString *_photoLocalIdentifier;
    NSNumber *_size;
    NSURL *_contentURL;
    NSString *_contentText;
}

@property (retain) NSDate *creationDate;
@property (retain) NSString *uti;
@property (retain) NSUUID *identifier;
@property (retain) NSUUID *cloudIdentifier;
@property (retain) NSString *photoLocalIdentifier;
@property (retain) NSNumber *size;
@property (retain) NSURL *contentURL;
@property (retain) NSString *contentText;

+ (_Bool)supportsSecureCoding;
+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;
+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 photoLocalIdentifier:(id)arg3 type:(id)arg4 sizeInBytes:(id)arg5 creationDate:(id)arg6 contentURL:(id)arg7 contentText:(id)arg8;

@end
