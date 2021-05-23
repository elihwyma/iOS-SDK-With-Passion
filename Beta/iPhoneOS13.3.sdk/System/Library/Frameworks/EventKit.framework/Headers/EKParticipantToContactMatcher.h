/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface EKParticipantToContactMatcher : NSObject

{
    NSArray *_contacts;
    NSSet *_contactEmailAddresses;
    NSSet *_contactNameComponents;
    NSSet *_contactCompanyNames;
}

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSSet *contactEmailAddresses;
@property (retain, nonatomic) NSSet *contactNameComponents;
@property (retain, nonatomic) NSSet *contactCompanyNames;

+ (id)_nameComponentsForContact:(id)arg1 reverse:(_Bool)arg2;
+ (id)_nameComponentsWithGivenName:(id)arg1 familyName:(id)arg2;
+ (id)_allParticipantsOnItem:(id)arg1;

- (id)initWithContacts:(id)arg1;
- (id)matchingParticipantsFromItem:(id)arg1;
- (void)_cacheContactData;
- (_Bool)anyContactMatchesAnyParticipant:(id)arg1;
- (_Bool)anyContactMatchesParticipant:(id)arg1;
- (id)matchingParticipantsFromParticipants:(id)arg1;
- (_Bool)anyContactMatchesAnyParticipantFromItem:(id)arg1;

@end
