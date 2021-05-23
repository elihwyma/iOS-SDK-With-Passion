/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMCameraClipEncryptionContext, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface HMCameraClip : NSObject <Swift>

{
    _Bool _complete;
    NSUUID *_uniqueIdentifier;
    NSDate *_startDate;
    double _duration;
    double _targetFragmentDuration;
    NSArray *_posterFrames;
    NSSet *_significantEvents;
    NSString *_streamingAssetVersion;
    HMCameraClipEncryptionContext *_encryptionContext;
    NSArray *_videoSegments;
}

@property (copy, readonly) NSString *streamingAssetVersion;
@property (copy, readonly) HMCameraClipEncryptionContext *encryptionContext;
@property (copy, readonly) NSArray *videoSegments;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (nonatomic, readonly) double targetFragmentDuration;
@property (copy, readonly) NSData *encryptionKey;
@property (nonatomic, readonly) NSArray *posterFrames;
@property (nonatomic, readonly) NSSet *significantEvents;
@property (nonatomic, readonly) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly) _Bool canAskForUserFeedback;

+ (_Bool)supportsSecureCoding;
+ (id)requiredHTTPHeadersForStreamingAssetVersion:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 startDate:(id)arg2 duration:(double)arg3 targetFragmentDuration:(double)arg4 isComplete:(_Bool)arg5 streamingAssetVersion:(id)arg6 encryptionContext:(id)arg7 posterFrames:(id)arg8 videoSegments:(id)arg9 significantEvents:(id)arg10;

@end
