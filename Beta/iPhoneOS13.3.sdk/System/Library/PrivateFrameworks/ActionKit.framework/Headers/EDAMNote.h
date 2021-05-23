/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteAttributes, EDAMNoteLimits, EDAMNoteRestrictions, NSArray, NSData, NSNumber, NSString;

@interface EDAMNote : FATObject

{
    NSString *_guid;
    NSString *_title;
    NSString *_content;
    NSData *_contentHash;
    NSNumber *_contentLength;
    NSNumber *_created;
    NSNumber *_updated;
    NSNumber *_deleted;
    NSNumber *_active;
    NSNumber *_updateSequenceNum;
    NSString *_notebookGuid;
    NSArray *_tagGuids;
    NSArray *_resources;
    EDAMNoteAttributes *_attributes;
    NSArray *_tagNames;
    NSArray *_sharedNotes;
    EDAMNoteRestrictions *_restrictions;
    EDAMNoteLimits *_limits;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSData *contentHash;
@property (retain, nonatomic) NSNumber *contentLength;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSArray *tagGuids;
@property (retain, nonatomic) NSArray *resources;
@property (retain, nonatomic) EDAMNoteAttributes *attributes;
@property (retain, nonatomic) NSArray *tagNames;
@property (retain, nonatomic) NSArray *sharedNotes;
@property (retain, nonatomic) EDAMNoteRestrictions *restrictions;
@property (retain, nonatomic) EDAMNoteLimits *limits;

+ (id)structName;
+ (id)structFields;

@end
