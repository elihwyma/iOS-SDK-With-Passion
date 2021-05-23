/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSString;

@interface PPAttendee : NSObject

{
    _Bool _isCurrentUser;
    unsigned char _status;
    NSString *_name;
    NSString *_emailAddress;
    NSString *_urlString;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) _Bool isCurrentUser;
@property (nonatomic, readonly) unsigned char status;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 urlString:(id)arg3 isCurrentUser:(_Bool)arg4 status:(unsigned char)arg5;
- (id)initWithEKParticipant:(id)arg1;
- (_Bool)isEqualToAttendee:(id)arg1;

@end
