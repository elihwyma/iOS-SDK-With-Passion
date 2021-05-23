/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface RCSavedRecordingsModelChangeContext : NSObject

{
    NSArray *_insertedObjects;
    NSArray *_updatedObjects;
    NSArray *_deletedObjects;
}

@property (copy, nonatomic, readonly) NSArray *insertedObjects;
@property (copy, nonatomic, readonly) NSArray *updatedObjects;
@property (copy, nonatomic, readonly) NSArray *deletedObjects;

- (id)insertedRecordingURIsIncludingTemporaryURIs:(_Bool)arg1;
- (id)updatedRecordingURIsIncludingTemporaryURIs:(_Bool)arg1;
- (id)deletedRecordingURIsIncludingTemporaryURIs:(_Bool)arg1;
- (id)_recordingURIsInArray:(id)arg1 includeTemporaryURIs:(_Bool)arg2;
- (id)initWithStateFromManagedObjectContext:(id)arg1;

@end
