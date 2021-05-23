/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURectList : NSObject

{
    vector_a9587b3d mRectList;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)rectListWithDifference:(struct CGRect)arg1 withRect:(struct CGRect)arg2;

- (id).cxx_construct;
- (id)initWithRect:(struct CGRect)arg1;
- (void)addRect:(struct CGRect)arg1;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithRectList:(id)arg1;

@end
