/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCPrivateListeningStateSource, NSString, NSTimeZone;

@interface MPCPlaybackDelegationProperties : NSObject <Swift>

{
    NSString *_deviceGUID;
    NSString *_deviceName;
    MPCPrivateListeningStateSource *_privateListeningStateSource;
    long long _systemReleaseType;
    NSString *_requestUserAgent;
    unsigned long long _storeAccountID;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (copy, nonatomic, readonly) NSString *deviceGUID;
@property (copy, nonatomic, readonly) NSString *deviceName;
@property (copy, nonatomic, readonly) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (nonatomic, readonly) long long systemReleaseType;
@property (copy, nonatomic, readonly) NSString *requestUserAgent;
@property (copy, nonatomic, readonly) NSTimeZone *timeZone;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2 privateListeningStateSource:(id)arg3;

@end
