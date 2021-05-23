/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CoreData/NSManagedObject.h>

@class ICNote, NSData;

@interface ICNoteData : NSManagedObject

{
    _Bool needsToBeSaved;
    _Bool settingNoteData;
}

@property (nonatomic, getter=isSettingNoteData) _Bool settingNoteData;
@property (retain, nonatomic) NSData *cryptoInitializationVector;
@property (retain, nonatomic) NSData *cryptoTag;
@property _Bool needsToBeSaved;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) ICNote *note;
@property (nonatomic, readonly) NSData *primitiveData;

- (void)willAccessValueForKey:(id)arg1;
- (void)willSave;
- (void)saveNoteDataIfNeeded;

@end
