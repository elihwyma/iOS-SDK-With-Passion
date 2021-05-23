/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class NSProgress, NSString;

__attribute__((visibility("hidden")))
@interface MCResourceProgressObserver : NSObject

{
    _Bool _progressObserversSet;
    NSString *_name;
    NSProgress *_progress;
    CDUnknownBlockType _cancelHandler;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;

@end
