/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSString;

@interface GKGameDescriptor : GKInternalRepresentation

{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_adamID;
    NSNumber *_externalVersion;
    NSString *_shortBundleVersion;
    long long _platform;
}

@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSNumber *externalVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *shortBundleVersion;
@property (nonatomic) long long platform;

+ (_Bool)supportsSecureCoding;
+ (long long)currentPlatform;
+ (id)secureCodedPropertyKeys;
+ (long long)gamePlatformFromServerGameDescriptorString:(id)arg1;
+ (long long)gamePlatformFromServerPushString:(id)arg1;
+ (id)platformStringForServerRequest:(long long)arg1;
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;
+ (id)currentPlatformServerString;

- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPushDictionary:(id)arg1;
- (struct NSDictionary *)dictionaryForRequest;

@end
