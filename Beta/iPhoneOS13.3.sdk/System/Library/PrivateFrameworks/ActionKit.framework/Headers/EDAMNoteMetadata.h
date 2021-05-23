/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteAttributes, NSArray, NSNumber, NSString;

@interface EDAMNoteMetadata : FATObject

{
    NSString *_guid;
    NSString *_title;
    NSNumber *_contentLength;
    NSNumber *_created;
    NSNumber *_updated;
    NSNumber *_deleted;
    NSNumber *_updateSequenceNum;
    NSString *_notebookGuid;
    NSArray *_tagGuids;
    EDAMNoteAttributes *_attributes;
    NSString *_largestResourceMime;
    NSNumber *_largestResourceSize;
}

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *contentLength;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSArray *tagGuids;
@property (retain, nonatomic) EDAMNoteAttributes *attributes;
@property (retain, nonatomic) NSString *largestResourceMime;
@property (retain, nonatomic) NSNumber *largestResourceSize;

+ (id)structName;
+ (id)structFields;

@end
