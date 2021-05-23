/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSNumber, NSString;

@interface DMFRemoveManagedBookRequest

{
    NSNumber *_iTunesStoreID;
    NSString *_persistentID;
}

@property (copy, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *persistentID;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
