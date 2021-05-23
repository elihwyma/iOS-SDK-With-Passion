/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKSQLiteConnection.h>

@class NSString;

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection

{
    _Bool _protectedDatabaseAttached;
    NSString *_protectedDatabasePath;
    NSString *_protectedDatabaseName;
}

@property (retain, nonatomic) NSString *protectedDatabasePath;
@property (retain, nonatomic) NSString *protectedDatabaseName;
@property (nonatomic, readonly) _Bool protectedDatabaseAttached;

- (id)_vfsModuleName;
- (id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4 errorCode:(int *)arg5;
- (int)attachProtectedDatabase;
- (void)dettachProtectedDatabase;

@end
