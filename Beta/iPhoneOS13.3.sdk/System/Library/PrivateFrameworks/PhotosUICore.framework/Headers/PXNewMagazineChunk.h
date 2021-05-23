/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXNewMagazineRectArray;

@interface PXNewMagazineChunk : NSObject

{
    long long _startIndexOfInputs;
    long long _startY;
    unsigned long long _numOfRects;
    PXNewMagazineRectArray *_rectsArray;
    unsigned long long _height;
}

@property (nonatomic, readonly) long long startIndexOfInputs;
@property (nonatomic, readonly) long long startY;
@property (nonatomic, readonly) unsigned long long numOfRects;
@property (nonatomic, readonly) PXNewMagazineRectArray *rectsArray;
@property (nonatomic, readonly) unsigned long long height;

- (id)initWithStartY:(long long)arg1 startIndexOfInputs:(long long)arg2 rectsArray:(id)arg3;

@end
