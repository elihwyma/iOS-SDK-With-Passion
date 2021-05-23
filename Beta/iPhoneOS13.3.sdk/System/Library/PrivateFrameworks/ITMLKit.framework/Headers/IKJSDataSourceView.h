/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSDataSource;

@protocol IKJSDataSourceViewDelegate;

@interface IKJSDataSourceView : NSObject

{
    struct {
        _Bool hasDidReset;
    } _delegateFlags;
    IKJSDataSource *_dataSource;
    id <IKJSDataSourceViewDelegate> _delegate;
    struct _NSRange _usedIndexRange;
}

@property (weak, nonatomic, readonly) IKJSDataSource *dataSource;
@property (weak, nonatomic) id <IKJSDataSourceViewDelegate> delegate;
@property (nonatomic) struct _NSRange usedIndexRange;

- (void)dealloc;
- (void)reset;
- (id)initForDataSource:(id)arg1;

@end
