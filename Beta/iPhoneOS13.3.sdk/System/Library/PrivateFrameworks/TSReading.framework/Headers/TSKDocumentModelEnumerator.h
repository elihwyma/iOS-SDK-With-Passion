/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@protocol TSKModel;

@interface TSKDocumentModelEnumerator : NSEnumerator

{
    _Bool _stop;
    _Bool _filterBeforeAddingChildren;
    id <TSKModel> _root;
    NSMutableArray *_enumeratorStack;
    CDUnknownBlockType _filter;
}

@property (retain, nonatomic) id <TSKModel> root;
@property (retain, nonatomic) NSMutableArray *enumeratorStack;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic) _Bool filterBeforeAddingChildren;

- (void)dealloc;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)initWithRootModelObject:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;

@end
