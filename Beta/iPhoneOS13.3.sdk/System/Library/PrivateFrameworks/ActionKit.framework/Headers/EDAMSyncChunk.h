/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMPreferences, NSArray, NSNumber;

@interface EDAMSyncChunk : FATObject

{
    NSNumber *_currentTime;
    NSNumber *_chunkHighUSN;
    NSNumber *_updateCount;
    NSArray *_notes;
    NSArray *_notebooks;
    NSArray *_tags;
    NSArray *_searches;
    NSArray *_resources;
    NSArray *_expungedNotes;
    NSArray *_expungedNotebooks;
    NSArray *_expungedTags;
    NSArray *_expungedSearches;
    NSArray *_linkedNotebooks;
    NSArray *_expungedLinkedNotebooks;
    EDAMPreferences *_preferences;
    NSArray *_notesNoLongerSharedWithMe;
    NSArray *_linkedAccounts;
    NSArray *_expungedLinkedAccounts;
}

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *chunkHighUSN;
@property (retain, nonatomic) NSNumber *updateCount;
@property (retain, nonatomic) NSArray *notes;
@property (retain, nonatomic) NSArray *notebooks;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *searches;
@property (retain, nonatomic) NSArray *resources;
@property (retain, nonatomic) NSArray *expungedNotes;
@property (retain, nonatomic) NSArray *expungedNotebooks;
@property (retain, nonatomic) NSArray *expungedTags;
@property (retain, nonatomic) NSArray *expungedSearches;
@property (retain, nonatomic) NSArray *linkedNotebooks;
@property (retain, nonatomic) NSArray *expungedLinkedNotebooks;
@property (retain, nonatomic) EDAMPreferences *preferences;
@property (retain, nonatomic) NSArray *notesNoLongerSharedWithMe;
@property (retain, nonatomic) NSArray *linkedAccounts;
@property (retain, nonatomic) NSArray *expungedLinkedAccounts;

+ (id)structName;
+ (id)structFields;

@end
