/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSProgress.h>

@class NSURL;

@protocol BRProgressProxyDelegate;

__attribute__((visibility("hidden")))
@interface BRProgressProxy : NSProgress

{
    NSURL *_url;
    id _globalProgressSubscriber;
    id <BRProgressProxyDelegate> _delegate;
}

@property (weak) id <BRProgressProxyDelegate> delegate;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
