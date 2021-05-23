/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@class CXHandle, NSDate, NSString, NSUUID;

@interface CXStartCallAction : CXCallAction

{
    _Bool _video;
    _Bool _relay;
    _Bool _upgrade;
    _Bool _retry;
    _Bool _emergency;
    _Bool _voicemail;
    _Bool _shouldSuppressInCallUI;
    CXHandle *_handle;
    NSString *_contactIdentifier;
    NSDate *_dateStarted;
    long long _ttyType;
    NSUUID *_localSenderIdentityUUID;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

@property (copy, nonatomic) NSDate *dateStarted;
@property (nonatomic, getter=isRelay) _Bool relay;
@property (nonatomic, getter=isUpgrade) _Bool upgrade;
@property (nonatomic, getter=isRetry) _Bool retry;
@property (nonatomic, getter=isEmergency) _Bool emergency;
@property (nonatomic, getter=isVoicemail) _Bool voicemail;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (retain, nonatomic) NSUUID *localSenderIdentityUUID;
@property (nonatomic) _Bool shouldSuppressInCallUI;
@property (copy, nonatomic) CXHandle *handle;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic, getter=isVideo) _Bool video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGSize localLandscapeAspectRatio;
@property (nonatomic) struct CGSize localPortraitAspectRatio;

+ (_Bool)supportsSecureCoding;
+ (double)timeout;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)fulfillWithDateStarted:(id)arg1;
- (void)updateAsFulfilledWithDateStarted:(id)arg1;
- (id)initWithCallUUID:(id)arg1 handle:(id)arg2;

@end
