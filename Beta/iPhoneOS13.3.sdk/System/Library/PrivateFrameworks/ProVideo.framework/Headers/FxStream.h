/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxStream : NSObject

{
    struct FxStreamPriv *_priv;
}

- (id)init;
- (void)dealloc;
- (id)provider;
- (void)setPin:(id)arg1;
- (id)pin;
- (id)createSampleAtTime:(double)arg1;

@end
