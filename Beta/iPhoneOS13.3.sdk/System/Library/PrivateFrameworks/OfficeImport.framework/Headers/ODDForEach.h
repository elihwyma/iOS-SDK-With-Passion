/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDLayoutObjectList.h>

@class ODDIteratorSpecification;

__attribute__((visibility("hidden")))
@interface ODDForEach : ODDLayoutObjectList

{
    ODDIteratorSpecification *mIteratorSpecification;
}

- (id)init;
- (id)description;
- (id)iteratorSpecification;

@end
