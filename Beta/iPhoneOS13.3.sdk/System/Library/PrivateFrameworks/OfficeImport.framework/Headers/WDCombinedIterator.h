/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDIterator.h>

__attribute__((visibility("hidden")))
@interface WDCombinedIterator : WDIterator

{
    WDIterator *mParentIterator;
    WDIterator *mChildIterator;
}

@property (retain, nonatomic) WDIterator *childIterator;

- (id)next;
- (_Bool)hasNext;
- (id)initWithParentIterator:(id)arg1;
- (id)childIteratorFrom:(id)arg1;
- (id)newChildIteratorFrom:(id)arg1;
- (void)incrementChildIterator;

@end
