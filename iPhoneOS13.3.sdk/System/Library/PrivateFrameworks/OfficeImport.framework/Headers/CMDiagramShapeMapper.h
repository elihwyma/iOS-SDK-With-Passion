//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDiagramMapper.h>

@class NSString, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeMapper : CMDiagramMapper
{
    NSUInteger mChildCount;
    OADOrientedBounds *mDiagramShapeBounds;
    NSString *mIdentifier;
    float mDefaultFontSize;
    int mMaxMappableTreeDepth;
    float mDefaultScale;
}

// - (void).cxx_destruct;
- (CGSize)sizeForNode:(id)arg1 atIndex:(NSUInteger)arg2;
- (float)setFonSizeForChildNode:(id)arg1 atIndex:(NSUInteger)arg2 level:(int)arg3;
- (CGSize)textSizeForShapeSize:(CGSize)arg1;
- (void)setFonSizeForChildNode:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setDefaultFonSize;
- (float)defaultFontSize;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (CGRect)circumscribedBounds;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;

@end

