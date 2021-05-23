/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDPresentationPoint : ODDPoint

{
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (id)parent;
- (void)setType:(int)arg1;
- (id)children;
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;

@end
