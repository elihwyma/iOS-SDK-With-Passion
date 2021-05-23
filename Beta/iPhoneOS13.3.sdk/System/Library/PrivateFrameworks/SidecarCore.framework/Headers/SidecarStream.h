/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSString, RPStreamSession, SidecarSession;

@interface SidecarStream : NSObject

{
    NSString *_identifier;
    RPStreamSession *_rapportStream;
    CDUnknownBlockType _handler;
    SidecarSession *_session;
    _Atomic unsigned long long _status;
    _Atomic _Bool _activated;
}

@property (readonly) RPStreamSession *rapportStream;
@property (readonly) SidecarSession *session;
@property (nonatomic, readonly) long long transport;
@property (nonatomic, readonly) CDStruct_bd2f613f nwClientID;
@property (readonly) unsigned long long status;
@property (readonly) long long fileDescriptor;
@property (readonly) NSString *identifier;
@property (readonly) long long type;
@property (readonly) unsigned long long flags;
@property (copy) CDUnknownBlockType handler;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 rapportStream:(id)arg2;
- (void)sendOPACK:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
