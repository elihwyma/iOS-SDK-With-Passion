/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CATimerManager : NSObject

{
    id timerSource;
}

@property (nonatomic) id timerSource;

+ (id)getWeakReferenceOfObject:(id)arg1;

- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
