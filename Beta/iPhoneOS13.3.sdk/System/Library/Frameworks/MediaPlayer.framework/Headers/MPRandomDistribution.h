/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@protocol MPRandom;

@interface MPRandomDistribution : NSObject <Swift>

{
    id <MPRandom> _source;
    long long _lowestValue;
    long long _highestValue;
    unsigned long long _numberOfPossibleOutcomes;
}

@property (nonatomic, readonly) long long lowestValue;
@property (nonatomic, readonly) long long highestValue;
@property (nonatomic, readonly) unsigned long long numberOfPossibleOutcomes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;

@end
