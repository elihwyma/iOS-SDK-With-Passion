/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ML3DatabaseValidationClient : NSObject

{
    NSMutableDictionary *_validatableDatabases;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;

- (id)init;
- (_Bool)validateDatabaseForLibrary:(id)arg1;
- (_Bool)_validateDatabaseForPath:(id)arg1 usingLibrary:(id)arg2;
- (id)_validatableDatabaseForPath:(id)arg1;
- (_Bool)validateDatabaseAtPath:(id)arg1;
- (_Bool)validateDatabaseForConnection:(id)arg1;
- (_Bool)isValidatingDatabaseForPath:(id)arg1;

@end
