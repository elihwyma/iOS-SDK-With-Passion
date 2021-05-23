/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSPersistentStoreDescription, WFDatabase;

@protocol VCDatabaseProvider <Swift>

@property (nonatomic, readonly) WFDatabase *database;
@property (copy, nonatomic, readonly) NSPersistentStoreDescription *storeDescription;

@end
