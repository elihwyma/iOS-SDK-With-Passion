/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSObject.h>

@interface TKVibrationRecorderRippleTouchContext : NSObject

{
    double _creationTimestamp;
    struct CGPoint _location;
}

@property (nonatomic, readonly) struct CGPoint location;

- (id)init;
- (void)reset;
- (double)timeIntervalSinceCreation;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct CGPoint)arg2;

@end
