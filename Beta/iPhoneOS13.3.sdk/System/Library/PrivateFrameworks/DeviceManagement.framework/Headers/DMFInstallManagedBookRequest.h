/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSNumber, NSString, NSURL;

@interface DMFInstallManagedBookRequest

{
    NSString *_originator;
    NSNumber *_iTunesStoreID;
    NSString *_persistentID;
    NSString *_author;
    NSString *_title;
    NSString *_version;
    NSURL *_URL;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *originator;
@property (copy, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) unsigned long long type;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
