/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class EDAMNoteFilter, EDAMNotesMetadataResultSpec, ENNotebook, NSArray, NSMutableArray, NSSet;

@interface ENSessionFindNotesContext : NSObject

{
    _Bool _requiresLocalMerge;
    _Bool _sortAscending;
    ENNotebook *_scopeNotebook;
    unsigned long long _scope;
    unsigned long long _sortOrder;
    EDAMNoteFilter *_noteFilter;
    EDAMNotesMetadataResultSpec *_resultSpec;
    unsigned long long _maxResults;
    NSArray *_allNotebooks;
    NSMutableArray *_linkedNotebooksToSearch;
    NSMutableArray *_findMetadataResults;
    NSSet *_resultGuidsFromBusiness;
    NSArray *_results;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) ENNotebook *scopeNotebook;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) unsigned long long sortOrder;
@property (retain, nonatomic) EDAMNoteFilter *noteFilter;
@property (retain, nonatomic) EDAMNotesMetadataResultSpec *resultSpec;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) _Bool requiresLocalMerge;
@property (nonatomic) _Bool sortAscending;
@property (retain, nonatomic) NSArray *allNotebooks;
@property (retain, nonatomic) NSMutableArray *linkedNotebooksToSearch;
@property (retain, nonatomic) NSMutableArray *findMetadataResults;
@property (retain, nonatomic) NSSet *resultGuidsFromBusiness;
@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
