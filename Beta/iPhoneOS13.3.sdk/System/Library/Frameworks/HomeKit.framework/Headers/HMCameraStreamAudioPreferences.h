/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSNumber, NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <Swift>

{
    NSNumber *_volume;
    NSSet *_codecs;
}

@property (nonatomic, readonly) NSNumber *volume;
@property (nonatomic, readonly) NSSet *codecs;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolume:(id)arg1 codecs:(id)arg2;

@end
