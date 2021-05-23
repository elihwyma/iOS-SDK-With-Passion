/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ASDSoftwareUpdate : NSObject <Swift>

{
    NSArray *_blockedBy;
    NSDate *_installDate;
    NSDictionary *_metrics;
    _Bool _perDevice;
    _Bool _profileValidated;
    NSDictionary *_rawUpdateDictionary;
    long long _rawUpdateState;
    NSDate *_timestamp;
    long long _updateState;
    _Bool _downloaded;
}

@property (copy, nonatomic) NSArray *blockedBy;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSDictionary *metrics;
@property (nonatomic, getter=isDownloaded) _Bool downloaded;
@property (nonatomic, getter=isPerDevice) _Bool perDevice;
@property (nonatomic, getter=isProfileValidated) _Bool profileValidated;
@property (nonatomic) long long rawUpdateState;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long updateState;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (nonatomic, readonly) NSDictionary *rawUpdateDictionary;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, readonly) NSDictionary *updateDictionary;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)releaseDate;
- (id)initWithUpdateDictionary:(id)arg1;

@end
