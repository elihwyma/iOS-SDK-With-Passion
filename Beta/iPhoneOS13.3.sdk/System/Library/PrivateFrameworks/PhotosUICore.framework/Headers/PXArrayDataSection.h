/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSection.h>

@class NSArray;

@interface PXArrayDataSection : PXDataSection

{
    NSArray *_sectionContent;
}

@property (copy, nonatomic, readonly) NSArray *sectionContent;

- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(long long)arg1;
- (long long)indexOfObject:(id)arg1;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2;
- (id)initWithSectionContent:(id)arg1;
- (long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2;

@end
