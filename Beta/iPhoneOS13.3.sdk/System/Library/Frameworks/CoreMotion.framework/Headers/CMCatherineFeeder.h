/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject

{
    CMCatherineFeederInternal *_internal;
}

@property (nonatomic, readonly) CMCatherineFeederInternal *internal;

- (id)init;
- (void)dealloc;
- (void)feedCatherine:(double)arg1 confidence:(double)arg2;

@end
