/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADFlattenedGroup : OADDrawable

{
    NSMutableArray *mDrawables;
}

- (id)init;
- (id)drawables;
- (void)addDrawable:(id)arg1;

@end
