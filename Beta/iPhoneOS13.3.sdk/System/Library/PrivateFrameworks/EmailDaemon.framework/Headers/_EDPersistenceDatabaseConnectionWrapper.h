/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnection, EFResource;

@interface _EDPersistenceDatabaseConnectionWrapper : NSObject

{
    EFResource *_resource;
    EDPersistenceDatabaseConnection *_connection;
    unsigned long long _generation;
    unsigned long long _type;
}

@property (retain, nonatomic) EFResource *resource;
@property (nonatomic, readonly) EDPersistenceDatabaseConnection *connection;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic) unsigned long long type;

- (id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2;

@end
