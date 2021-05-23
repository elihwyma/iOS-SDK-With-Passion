/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PXNewMagazineRectArray;

@interface PXMagazineRecursiveContext : NSObject

{
    NSMutableArray *_generatedChunks;
    PXNewMagazineRectArray *_outRectArray;
    PXNewMagazineRectArray *_fallbackRectArray;
}

@property (retain, nonatomic) NSMutableArray *generatedChunks;
@property (retain, nonatomic) PXNewMagazineRectArray *outRectArray;
@property (retain, nonatomic) PXNewMagazineRectArray *fallbackRectArray;

@end
