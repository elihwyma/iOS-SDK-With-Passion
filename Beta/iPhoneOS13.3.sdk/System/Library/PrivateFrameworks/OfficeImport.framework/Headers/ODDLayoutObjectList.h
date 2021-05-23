/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDLayoutObjectList : ODDLayoutObject

{
    NSMutableArray *mChildren;
}

- (id)init;
- (void)addChild:(id)arg1;
- (id)children;

@end
