/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSObject.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL, WCUserInfo;

@interface WCSessionFile : NSObject

{
    NSDictionary *_metadata;
    NSDate *_creationDate;
    WCUserInfo *_userInfoStorage;
    NSString *_relativePath;
    NSString *_fileIdentifier;
    NSNumber *_fileSize;
    NSURL *_fileURL;
}

@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) WCUserInfo *userInfoStorage;
@property (copy, nonatomic) NSString *relativePath;
@property (copy) NSString *fileIdentifier;
@property (copy, nonatomic) NSNumber *fileSize;
@property (copy, readonly) NSData *userInfoData;
@property (retain, nonatomic) NSURL *fileURL;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (_Bool)updateUserInfoData:(id)arg1 error:(id *)arg2;
- (_Bool)updateUserInfo:(id)arg1 error:(id *)arg2;
- (_Bool)verifyMetadata;
- (id)initWithIdentifier:(id)arg1 fileURL:(id)arg2 relativePath:(id)arg3;
- (id)initWithIdentifier:(id)arg1 relativePath:(id)arg2;

@end
