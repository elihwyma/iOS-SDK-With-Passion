/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject

{
    DESRecordStore *_typingDataStore;
}

@property (retain, nonatomic) DESRecordStore *typingDataStore;

- (id)init;
- (void)storeTypingSession:(id)arg1 containsCP:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldRecordToDES;
- (void)storeAlignedSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRecords:(CDUnknownBlockType)arg1;
- (void)clearStoredRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
