/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol PLThumbPersistenceManager;

@interface PLTemporaryImageTable : NSObject

{
    id <PLThumbPersistenceManager> _imageTable;
    unsigned long long _nextTableEntryIndex;
    NSMutableArray *_itemIndexToThumbEntryMapping;
    NSString *_imageTablePath;
    unsigned short _imageFormat;
}

- (void)dealloc;
- (void)reset;
- (void)_cleanup;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)_positional_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4;
- (id)initWithWithPath:(id)arg1 imageFormat:(unsigned short)arg2;
- (void)setImage:(struct NSObject *)arg1 forItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1;
- (struct NSObject *)imageForItemAtIndex:(unsigned long long)arg1;
- (void)insertItemAtIndex:(unsigned long long)arg1;

@end
