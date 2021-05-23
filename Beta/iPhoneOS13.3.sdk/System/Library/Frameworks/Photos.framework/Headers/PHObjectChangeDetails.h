/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PHObject;

@interface PHObjectChangeDetails : NSObject

{
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    _Bool _assetContentChanged;
    _Bool _assetCollectionTitlePropertiesChanged;
}

@property (nonatomic, readonly) _Bool assetCollectionTitlePropertiesChanged;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) _Bool assetContentChanged;
@property (readonly) _Bool objectWasDeleted;

- (id)description;
- (void)_calculateDiffs;
- (id)initWithPHObject:(id)arg1;

@end
