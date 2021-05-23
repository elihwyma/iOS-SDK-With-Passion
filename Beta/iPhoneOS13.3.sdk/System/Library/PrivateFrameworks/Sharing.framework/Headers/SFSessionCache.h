/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface SFSessionCache : NSObject

{
    _Bool _activated;
    _Bool _invalidated;
    struct NSMutableDictionary *_sessions;
    struct NSMutableDictionary *_timestamps;
    unsigned long long _capacity;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    NSUUID *_identifier;
    NSString *_serviceIdentifier;
}

@property (nonatomic) unsigned long long capacity;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic) NSString *serviceIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)invalidate;
- (void)clearCache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activate;
- (id)activeSessions;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (void)_sessionWasInterrupted:(id)arg1;
- (void)_sessionWasInvalidated:(id)arg1;
- (_Bool)cacheFull;
- (void)_popCache;
- (id)_sessionWithDevice:(id)arg1 activate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3 toDevice:(id)arg4;
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2 toDevice:(id)arg3;
- (id)sessionWithDevice:(id)arg1 activate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)activePeerDeviceIDs;

@end
