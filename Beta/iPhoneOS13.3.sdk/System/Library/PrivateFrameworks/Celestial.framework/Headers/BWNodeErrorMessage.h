/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeMessage.h>

@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage

{
    BWNodeError *_nodeError;
}

@property (readonly) BWNodeError *nodeError;

+ (id)newMessageWithNodeError:(id)arg1;

- (void)dealloc;
- (id)_initWithNodeError:(id)arg1;

@end
