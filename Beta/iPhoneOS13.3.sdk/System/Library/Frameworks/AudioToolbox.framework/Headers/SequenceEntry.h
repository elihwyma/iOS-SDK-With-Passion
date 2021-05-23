/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SequenceEntry : NSObject

{
    CDUnknownBlockType _handler;
    _Bool _running;
    _Bool _detached;
}

@property (copy) CDUnknownBlockType handler;
@property _Bool running;
@property _Bool detached;

- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end
