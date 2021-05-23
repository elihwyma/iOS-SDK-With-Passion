/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCPrivateListeningStateSource.h>

@class NSNumber;

@interface _MPCPrivateListeningStateStaticSource : MPCPrivateListeningStateSource

{
    NSNumber *_value;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)currentValue;
- (id)_initWithValue:(id)arg1;

@end
