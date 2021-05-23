/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramListMapper : CMDiagramShapeMapper

{
    float mMaxLineCount;
}

- (struct CGSize)textSize;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setDefaultFonSize;
- (void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3;
- (id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1;

@end
