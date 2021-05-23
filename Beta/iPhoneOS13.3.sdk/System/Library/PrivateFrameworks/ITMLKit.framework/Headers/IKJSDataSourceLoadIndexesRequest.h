/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSEventListenerObject.h>

@class IKJSDataSource, JSValue;

@interface IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject

{
    int _state;
    IKJSDataSource *_dataSource;
    CDUnknownBlockType _completion;
    struct _NSRange _range;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, readonly) _Bool isClosed;
@property (weak, nonatomic, readonly) JSValue *dataSource;
@property (nonatomic, readonly) struct _NSRange range;

- (void)dealloc;
- (void)cancel;
- (void)close:(_Bool)arg1;
- (id)initWithDataSource:(id)arg1 range:(struct _NSRange)arg2;

@end
