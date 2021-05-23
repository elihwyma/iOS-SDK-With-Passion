/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAction.h>

#import <HomeKit/Swift-Protocol.h>

@class HMFUnfairLock, MPPlaybackArchive, NSNumber, NSSet, NSString, NSUUID;

@interface HMMediaPlaybackAction : HMAction <Swift>

{
    NSSet *_mediaProfiles;
    long long _state;
    NSNumber *_volume;
    MPPlaybackArchive *_playbackArchive;
    HMFUnfairLock *_lock;
}

@property (copy, nonatomic) NSSet *mediaProfiles;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isSupportedForHome:(id)arg1;
+ (id)mediaPlaybackActionWithProtoBuf:(id)arg1 home:(id)arg2;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)type;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (_Bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)encodeAsProtoBuf;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4 uuid:(id)arg5;
- (id)initWithPlaybackAction:(id)arg1 uuid:(id)arg2;
- (void)_updateWithAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_updateWithSerializedAction:(id)arg1 home:(id)arg2;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4;
- (id)accessoryProfiles;
- (void)updateWithAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
