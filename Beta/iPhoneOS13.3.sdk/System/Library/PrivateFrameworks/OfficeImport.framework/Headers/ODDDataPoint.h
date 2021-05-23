/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDDataPoint : ODDPoint

{
    NSMutableArray *mPresentations;
}

- (id)presentations;
- (void)addPresentation:(id)arg1 order:(unsigned long long)arg2;
- (void)addAssociatedPresentation:(id)arg1;

@end
