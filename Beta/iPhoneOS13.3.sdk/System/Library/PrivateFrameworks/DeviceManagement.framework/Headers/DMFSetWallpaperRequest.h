/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSData, NSFileHandle, NSURL;

@interface DMFSetWallpaperRequest

{
    NSURL *_imageURL;
    NSData *_imageData;
    long long _location;
    NSFileHandle *_fileHandle;
}

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) long long location;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
