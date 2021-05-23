/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <WFDatabase.h>

@class NSPersistentStoreDescription, NSString;

@interface WFDatabase (VCDatabaseProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFDatabase *database;
@property (copy, nonatomic, readonly) NSPersistentStoreDescription *storeDescription;

@end
