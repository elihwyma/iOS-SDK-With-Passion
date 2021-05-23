/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface SISchemaMultiUserState : PBCodable

{
    NSArray *_enrolledUsers;
}

@property (copy, nonatomic) NSArray *enrolledUsers;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addEnrolledUsers:(id)arg1;
- (void)clearEnrolledUsers;
- (unsigned long long)enrolledUsersCount;
- (id)enrolledUsersAtIndex:(unsigned long long)arg1;

@end
