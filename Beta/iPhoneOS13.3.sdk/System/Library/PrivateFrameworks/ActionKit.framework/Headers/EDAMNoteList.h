/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber;

@interface EDAMNoteList : FATObject

{
    NSNumber *_startIndex;
    NSNumber *_totalNotes;
    NSArray *_notes;
    NSArray *_stoppedWords;
    NSArray *_searchedWords;
    NSNumber *_updateCount;
}

@property (retain, nonatomic) NSNumber *startIndex;
@property (retain, nonatomic) NSNumber *totalNotes;
@property (retain, nonatomic) NSArray *notes;
@property (retain, nonatomic) NSArray *stoppedWords;
@property (retain, nonatomic) NSArray *searchedWords;
@property (retain, nonatomic) NSNumber *updateCount;

+ (id)structName;
+ (id)structFields;

@end
