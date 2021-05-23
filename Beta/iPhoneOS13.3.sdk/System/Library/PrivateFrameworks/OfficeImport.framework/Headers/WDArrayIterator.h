/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDIterator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDArrayIterator : WDIterator

{
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)initWithArray:(id)arg1;
- (id)next;
- (_Bool)hasNext;

@end
