/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@class NSPersonNameComponents, NSString;

@interface PHMomentShareParticipant : PHObject

{
    unsigned short _type;
    NSString *_emailAddress;
    NSPersonNameComponents *_nameComponents;
    NSString *_phoneNumber;
}

@property (nonatomic, readonly) unsigned short type;
@property (copy, nonatomic, readonly) NSString *emailAddress;
@property (copy, nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic, readonly) NSString *phoneNumber;

+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchParticipantsInMomentShare:(id)arg1 options:(id)arg2;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end
