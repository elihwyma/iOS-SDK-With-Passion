/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDIterator.h>

__attribute__((visibility("hidden")))
@interface WDTestIterator : WDIterator

{
    WDIterator *mIterator;
    id mNext;
}

- (id)next;
- (_Bool)hasNext;
- (id)initWithIterator:(id)arg1;
- (_Bool)test:(id)arg1;

@end
