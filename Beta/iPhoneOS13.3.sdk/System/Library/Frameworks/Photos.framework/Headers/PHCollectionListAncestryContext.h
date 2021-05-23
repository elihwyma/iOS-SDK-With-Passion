/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol NSFastEnumeration;

@interface PHCollectionListAncestryContext : NSObject

{
    id <NSFastEnumeration> _allCollectionLists;
    NSMutableDictionary *_collectionListsByOID;
}

@property (retain) id <NSFastEnumeration> allCollectionLists;
@property (retain) NSMutableDictionary *collectionListsByOID;

- (id)folderForID:(id)arg1;
- (id)initWithCollectionLists:(id)arg1;

@end
