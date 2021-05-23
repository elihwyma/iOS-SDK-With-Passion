/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

__attribute__((visibility("hidden")))
@interface ODDChoose : ODDLayoutObject

{
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)init;
- (id)description;
- (id)whens;
- (void)addWhen:(id)arg1;
- (id)otherwise;
- (void)setOtherwise:(id)arg1;

@end
