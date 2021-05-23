/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class ENNoteRef, ENNotebook, NSDate, NSString;

@interface ENSessionFindNotesResult : NSObject

{
    _Bool _hasResources;
    int _updateSequenceNum;
    ENNoteRef *_noteRef;
    ENNotebook *_notebook;
    NSString *_title;
    NSDate *_created;
    NSDate *_updated;
}

@property (nonatomic) int updateSequenceNum;
@property (retain, nonatomic) ENNoteRef *noteRef;
@property (retain, nonatomic) ENNotebook *notebook;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *created;
@property (retain, nonatomic) NSDate *updated;
@property (nonatomic) _Bool hasResources;

- (id)description;

@end
