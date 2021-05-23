/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface PGPlaybackProgress : NSObject

{
    double _anchorProgress;
    double _anchorTimestamp;
    double _rate;
}

@property (nonatomic, readonly) double anchorProgress;
@property (nonatomic, readonly) double anchorTimestamp;
@property (nonatomic, readonly) double rate;
@property (nonatomic, readonly) double currentProgress;

+ (_Bool)supportsSecureCoding;
+ (double)currentTimestamp;
+ (id)playbackProgressWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3;
- (double)progressForTimestamp:(double)arg1;

@end
