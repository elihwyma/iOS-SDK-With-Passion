/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3Client, ML3DatabaseConnection, ML3MusicLibrary, MSVXPCTransaction, NSLock, NSUUID;

@interface ML3ActiveTransaction : NSObject

{
    ML3DatabaseConnection *_connection;
    NSLock *_lock;
    MSVXPCTransaction *_xpcTransaction;
    _Bool _terminable;
    _Bool _inUseByOperation;
    _Bool _readOnly;
    ML3MusicLibrary *_library;
    NSUUID *_identifier;
    ML3Client *_client;
    double _lastUsedTime;
}

@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) ML3DatabaseConnection *connection;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) ML3Client *client;
@property (nonatomic) double lastUsedTime;
@property (nonatomic) _Bool terminable;
@property (nonatomic) _Bool inUseByOperation;
@property (nonatomic, getter=isReadOnly) _Bool readOnly;

- (id)init;
- (id)description;
- (void)lock;
- (void)unlock;
- (id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3;
- (void)updateLastUsed;
- (id)_relinquishConnection;

@end
