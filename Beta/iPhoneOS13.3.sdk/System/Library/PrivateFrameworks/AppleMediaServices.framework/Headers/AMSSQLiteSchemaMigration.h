/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteConnection, NSError;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchemaMigration : NSObject

{
    AMSSQLiteConnection *_connection;
    NSError *_error;
    _Bool _success;
}

@property (readonly) NSError *error;
@property (readonly) _Bool success;

- (id)initWithConnection:(id)arg1;
- (void)executeStatement:(id)arg1;
- (void)_executeStatement:(id)arg1 canFailMigration:(_Bool)arg2 bindings:(CDUnknownBlockType)arg3;
- (void)executeOptionalStatement:(id)arg1;
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;

@end
