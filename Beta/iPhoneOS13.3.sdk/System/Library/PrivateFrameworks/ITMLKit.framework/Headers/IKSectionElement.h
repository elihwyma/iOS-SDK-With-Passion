/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDataSourceElement.h>

@class IKHeaderElement, IKViewElement, NSArray;

@interface IKSectionElement : IKDataSourceElement

{
    NSArray *_items;
}

@property (retain, nonatomic, readonly) IKHeaderElement *header;
@property (retain, nonatomic, readonly) NSArray *items;
@property (retain, nonatomic, readonly) IKViewElement *footer;

- (id)applyUpdatesWithElement:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (id)unboundItemElements;

@end
