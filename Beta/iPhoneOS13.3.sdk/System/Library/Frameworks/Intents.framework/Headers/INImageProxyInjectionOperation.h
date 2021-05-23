/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSOperation.h>

@protocol INImageProxyInjecting;

@interface INImageProxyInjectionOperation : NSOperation

{
    _Bool _isFinished;
    _Bool _isExecuting;
    id <INImageProxyInjecting> _injector;
    CDUnknownBlockType _imageProxyRequestBlock;
    CDUnknownBlockType _copyReturnBlock;
}

@property (retain, nonatomic) id <INImageProxyInjecting> injector;
@property (copy, nonatomic) CDUnknownBlockType imageProxyRequestBlock;
@property (copy, nonatomic) CDUnknownBlockType copyReturnBlock;

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;

@end
