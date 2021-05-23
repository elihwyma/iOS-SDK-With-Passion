/*
 Image: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSSUsageApp : NSObject

{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    unsigned long long _staticSize;
    unsigned long long _dynamicSize;
    unsigned long long _sharedSize;
    unsigned long long _dataSize;
    unsigned long long _totalSize;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (nonatomic) unsigned long long staticSize;
@property (nonatomic) unsigned long long dynamicSize;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic, readonly) unsigned long long sharedSize;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
