/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPSectionedIdentifierListItemEntry, NSMutableSet;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject

{
    MPSectionedIdentifierListItemEntry *_rootEntry;
    NSMutableSet *_clonedEntries;
}

@property (retain, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry;
@property (retain, nonatomic) NSMutableSet *clonedEntries;

- (id)init;

@end
