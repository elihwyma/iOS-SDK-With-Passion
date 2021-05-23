/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class IDSDestination, NSDate, NSString;

@interface TUAnswerRequest : NSObject <Swift>

{
    _Bool _wantsHoldMusic;
    _Bool _pauseVideoToStart;
    _Bool _downgradeToAudio;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    IDSDestination *_endpointIDSDestination;
    NSString *_endpointRapportMediaSystemIdentifier;
    NSString *_endpointRapportEffectiveIdentifier;
    long long _behavior;
    NSDate *_dateAnswered;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

@property (retain, nonatomic) NSDate *dateAnswered;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) IDSDestination *endpointIDSDestination;
@property (retain, nonatomic) NSString *endpointRapportMediaSystemIdentifier;
@property (retain, nonatomic) NSString *endpointRapportEffectiveIdentifier;
@property (nonatomic) _Bool wantsHoldMusic;
@property (nonatomic) _Bool pauseVideoToStart;
@property (nonatomic) _Bool downgradeToAudio;
@property (nonatomic) long long behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *uniqueProxyIdentifier;
@property (nonatomic) struct CGSize localLandscapeAspectRatio;
@property (nonatomic) struct CGSize localPortraitAspectRatio;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCall:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;

@end
