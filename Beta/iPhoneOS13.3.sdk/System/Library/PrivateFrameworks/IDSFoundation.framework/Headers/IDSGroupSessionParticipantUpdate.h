/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface IDSGroupSessionParticipantUpdate : NSObject

{
    NSUUID *_groupUUID;
    _Bool _isInitiator;
    unsigned long long _participantIdentifier;
    NSString *_participantDestinationID;
    unsigned long long _participantUpdateType;
    unsigned long long _participantUpdateSubtype;
    _Bool _fromServer;
    NSDate *_serverDate;
    NSData *_participantData;
    NSData *_clientContextData;
    NSArray *_members;
    NSDictionary *_participantIDs;
    NSUUID *_relaySessionID;
}

@property (nonatomic, readonly) _Bool isInitiator;
@property (nonatomic, readonly) NSUUID *groupUUID;
@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) NSString *participantDestinationID;
@property (nonatomic, readonly) unsigned long long participantUpdateType;
@property (nonatomic, readonly) unsigned long long participantUpdateSubtype;
@property (nonatomic, readonly) _Bool fromServer;
@property (nonatomic, readonly) NSDate *serverDate;
@property (nonatomic, readonly) NSData *participantData;
@property (nonatomic, readonly) NSData *clientContextData;
@property (nonatomic, readonly) NSArray *members;
@property (nonatomic, readonly) NSDictionary *participantIDs;
@property (nonatomic, readonly) NSUUID *relaySessionID;

- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 isInitiator:(_Bool)arg2 participantIdentifier:(unsigned long long)arg3 participantDestinationID:(id)arg4 participantUpdateType:(unsigned long long)arg5 participantUpdateSubtype:(unsigned long long)arg6 fromServer:(_Bool)arg7 serverDate:(id)arg8 participantData:(id)arg9 clientContextData:(id)arg10 members:(id)arg11 participantIDs:(id)arg12 relaySessionID:(id)arg13;

@end
