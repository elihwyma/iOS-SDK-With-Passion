/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NoteContext;

@interface DALocalDBWatcher : NSObject

{
    int _lastSavedCalSequenceNumber;
    struct CalDatabase *_calWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedCalPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
}

@property (nonatomic) int lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;

- (id)init;
- (void)dealloc;
- (void)noteCalDBDirChanged;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)removeConcernedCalParty:(id)arg1;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(CDUnknownBlockType)arg2;
- (void)removeConcernedNoteParty:(id)arg1;
- (void)didReceiveDarwinNotification:(id)arg1;

@end
