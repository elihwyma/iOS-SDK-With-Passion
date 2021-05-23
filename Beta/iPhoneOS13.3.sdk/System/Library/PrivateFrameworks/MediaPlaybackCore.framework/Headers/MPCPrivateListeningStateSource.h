/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSNumber;

@interface MPCPrivateListeningStateSource : NSObject <Swift>

{
    NSNumber *_overrideValue;
    NSNumber *_currentValue;
}

@property (copy, nonatomic, readonly) NSNumber *overrideValue;
@property (copy, nonatomic, readonly) NSNumber *currentValue;

+ (_Bool)supportsSecureCoding;
+ (id)localDeviceSource;
+ (id)staticSourceWithValue:(id)arg1;
+ (id)sourceWithUserIdentity:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)setOverrideValue:(id)arg1;

@end
