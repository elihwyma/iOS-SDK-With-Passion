/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PSSearchableItemManifest : NSObject

{
    NSMutableArray *_searchableItems;
}

@property (retain, nonatomic) NSMutableArray *searchableItems;

- (id)init;
- (id)items;
- (id)_stringKeyForString:(id)arg1;
- (id)_escapedStringForString:(id)arg1;
- (void)addSearchableItems:(id)arg1;
- (void)addSearchableItem:(id)arg1;
- (void)removeSearchableItem:(id)arg1;
- (_Bool)writeToPlistAndStringsFilesAtURL:(id)arg1 error:(id *)arg2;

@end
