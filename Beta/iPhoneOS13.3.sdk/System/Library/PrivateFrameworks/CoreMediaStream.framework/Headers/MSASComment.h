/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MSASComment : NSObject

{
    _Bool _isLike;
    _Bool _isCaption;
    _Bool _isBatchComment;
    _Bool _isDeletable;
    _Bool _isMine;
    int _ID;
    NSString *_GUID;
    NSDate *_timestamp;
    NSDate *_clientTimestamp;
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_email;
    NSString *_content;
}

@property (retain, nonatomic) NSString *GUID;
@property (nonatomic) int ID;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *clientTimestamp;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) _Bool isDeletable;
@property (nonatomic) _Bool isMine;
@property (nonatomic) _Bool isLike;
@property (nonatomic) _Bool isCaption;
@property (nonatomic) _Bool isBatchComment;
@property (retain, nonatomic) NSString *content;

+ (_Bool)supportsSecureCoding;
+ (id)comment;
+ (id)MSASPCommentFromProtocolDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
