/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet, NSString;

@interface EDAMSyncChunkFilter : FATObject

{
    NSNumber *_includeNotes;
    NSNumber *_includeNoteResources;
    NSNumber *_includeNoteAttributes;
    NSNumber *_includeNotebooks;
    NSNumber *_includeTags;
    NSNumber *_includeSearches;
    NSNumber *_includeResources;
    NSNumber *_includeLinkedNotebooks;
    NSNumber *_includeExpunged;
    NSNumber *_includeNoteApplicationDataFullMap;
    NSNumber *_includeResourceApplicationDataFullMap;
    NSNumber *_includeNoteResourceApplicationDataFullMap;
    NSNumber *_includePreferences;
    NSNumber *_includeSharedNotes;
    NSNumber *_includeNotesSharedWithMe;
    NSNumber *_includeLinkedAccounts;
    NSNumber *_omitSharedNotebooks;
    NSString *_requireNoteContentClass;
    NSSet *_notebookGuids;
    NSNumber *_inAccountUserId;
}

@property (retain, nonatomic) NSNumber *includeNotes;
@property (retain, nonatomic) NSNumber *includeNoteResources;
@property (retain, nonatomic) NSNumber *includeNoteAttributes;
@property (retain, nonatomic) NSNumber *includeNotebooks;
@property (retain, nonatomic) NSNumber *includeTags;
@property (retain, nonatomic) NSNumber *includeSearches;
@property (retain, nonatomic) NSNumber *includeResources;
@property (retain, nonatomic) NSNumber *includeLinkedNotebooks;
@property (retain, nonatomic) NSNumber *includeExpunged;
@property (retain, nonatomic) NSNumber *includeNoteApplicationDataFullMap;
@property (retain, nonatomic) NSNumber *includeResourceApplicationDataFullMap;
@property (retain, nonatomic) NSNumber *includeNoteResourceApplicationDataFullMap;
@property (retain, nonatomic) NSNumber *includePreferences;
@property (retain, nonatomic) NSNumber *includeSharedNotes;
@property (retain, nonatomic) NSNumber *includeNotesSharedWithMe;
@property (retain, nonatomic) NSNumber *includeLinkedAccounts;
@property (retain, nonatomic) NSNumber *omitSharedNotebooks;
@property (retain, nonatomic) NSString *requireNoteContentClass;
@property (retain, nonatomic) NSSet *notebookGuids;
@property (retain, nonatomic) NSNumber *inAccountUserId;

+ (id)structName;
+ (id)structFields;

@end
