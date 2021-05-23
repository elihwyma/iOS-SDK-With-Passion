/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSDate, NSString, NSURL;

@interface EMMailDropMetadata : NSObject <Swift>

{
    _Bool _autoArchive;
    _Bool _isInvalid;
    NSString *_fileName;
    long long _fileSize;
    NSString *_mimeType;
    NSURL *_directUrl;
    NSURL *_wrappedUrl;
    NSDate *_expiration;
    unsigned long long _flags;
    NSString *_UUID;
}

@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) _Bool autoArchive;
@property (retain, nonatomic) NSURL *directUrl;
@property (retain, nonatomic) NSURL *wrappedUrl;
@property (retain, nonatomic) NSDate *expiration;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) _Bool isInvalid;

+ (_Bool)supportsSecureCoding;
+ (id)mailDropMetadata;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (_Bool)isExpired;
- (_Bool)isBanner;
- (id)directUrlString;
- (_Bool)isPhotoArchive;
- (id)wrappedUrlString;
- (_Bool)isBannerWithMultiple;

@end
