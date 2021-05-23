/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject

{
    NSMutableDictionary *_entityTranslatorByEntityName;
}

@property (retain, nonatomic) NSMutableDictionary *entityTranslatorByEntityName;

- (id)initWithPhotoLibrary:(id)arg1;
- (void)_registerTranslatorsWithPhotoLibrary:(id)arg1;
- (id)graphChangesWithPhotoChange:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
