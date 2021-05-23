/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement

{
    _Bool _paged;
}

@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) NSString *rowHeight;
@property (nonatomic, readonly, getter=isPaged) _Bool paged;
@property (nonatomic, readonly) unsigned long long rowCount;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
