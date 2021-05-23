/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject

{
    NSMutableArray *_initialSamples;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (id)initialSamples;
- (void)setInitialSamples:(id)arg1;

@end
