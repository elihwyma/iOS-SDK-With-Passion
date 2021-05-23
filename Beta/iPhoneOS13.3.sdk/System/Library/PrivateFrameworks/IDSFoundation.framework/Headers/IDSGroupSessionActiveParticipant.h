/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSUUID;

@interface IDSGroupSessionActiveParticipant : NSObject

{
    NSUUID *_groupUUID;
    unsigned long long _participantIdentifier;
    NSString *_participantURI;
    _Bool _isKnown;
    NSData *_participantPushToken;
}

@property (nonatomic, readonly) NSUUID *groupUUID;
@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) _Bool isKnown;
@property (nonatomic, readonly) NSString *participantURI;
@property (nonatomic, readonly) NSData *participantPushToken;

- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(_Bool)arg3 participantURI:(id)arg4 pushToken:(id)arg5;

@end
