/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject

{
    NSMutableArray *_callbackRegistrations;
}

- (id)init;
- (void)dealloc;
- (void)addCallbackToCancel:(id)arg1;
- (void)cancelAllCallbacks;

@end
