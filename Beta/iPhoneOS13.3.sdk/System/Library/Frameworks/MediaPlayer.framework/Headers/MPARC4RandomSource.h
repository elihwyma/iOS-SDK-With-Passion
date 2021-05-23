/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSData;

@interface MPARC4RandomSource : NSObject <Swift>

{
    struct Arc4State *_state;
    NSData *_seed;
}

@property (copy, nonatomic) NSData *seed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (id)initWithSeed:(id)arg1;

@end
