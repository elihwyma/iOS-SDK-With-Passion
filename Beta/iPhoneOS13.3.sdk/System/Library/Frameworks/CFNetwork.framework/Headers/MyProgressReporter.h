/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSProgress;

@interface MyProgressReporter : NSObject

{
    NSProgress *_progress;
    _Bool _receivedProgressUpdate;
}

@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) _Bool receivedProgressUpdate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObserving;
- (void)stopObserving;

@end
