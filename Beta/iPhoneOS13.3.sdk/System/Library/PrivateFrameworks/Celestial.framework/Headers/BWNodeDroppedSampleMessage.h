/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeMessage.h>

@class BWDroppedSample;

@interface BWNodeDroppedSampleMessage : BWNodeMessage

{
    BWDroppedSample *_droppedSample;
}

@property (readonly) BWDroppedSample *droppedSample;

+ (id)newMessageWithDroppedSample:(id)arg1;

- (void)dealloc;
- (id)_initWithDroppedSample:(id)arg1;

@end
