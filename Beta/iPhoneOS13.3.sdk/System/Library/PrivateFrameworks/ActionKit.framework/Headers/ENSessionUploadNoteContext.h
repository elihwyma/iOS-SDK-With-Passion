/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class EDAMNote, ENNoteRef, ENNoteStoreClient, ENNotebook;

@interface ENSessionUploadNoteContext : NSObject

{
    EDAMNote *_note;
    ENNoteRef *_refToReplace;
    ENNotebook *_notebook;
    long long _policy;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _progress;
    ENNoteStoreClient *_noteStore;
    ENNoteRef *_noteRef;
}

@property (retain, nonatomic) EDAMNote *note;
@property (retain, nonatomic) ENNoteRef *refToReplace;
@property (retain, nonatomic) ENNotebook *notebook;
@property (nonatomic) long long policy;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType progress;
@property (retain, nonatomic) ENNoteStoreClient *noteStore;
@property (retain, nonatomic) ENNoteRef *noteRef;

@end
