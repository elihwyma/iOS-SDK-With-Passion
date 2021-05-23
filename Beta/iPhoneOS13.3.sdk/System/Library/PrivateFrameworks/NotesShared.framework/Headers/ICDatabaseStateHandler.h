/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICDatabaseStateHandler : NSObject

+ (id)stateDictionary;
+ (id)modernDatabaseState;
+ (id)miscState;
+ (id)stateDictionaryFromLoggables:(id)arg1;
+ (void)addDatabaseStateHandler;

@end
