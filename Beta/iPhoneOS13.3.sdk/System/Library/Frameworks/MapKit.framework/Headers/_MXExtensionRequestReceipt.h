/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject

{
    NSTimer *_timer;
    CDUnknownBlockType _completion;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelWithTimeInterval:(double)arg1;

@end
