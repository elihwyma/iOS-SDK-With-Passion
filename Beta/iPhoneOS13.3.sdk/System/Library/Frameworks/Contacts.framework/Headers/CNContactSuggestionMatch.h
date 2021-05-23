/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString, SGContact, SGContactMatch;

@interface CNContactSuggestionMatch : NSObject

{
    SGContact *_contact;
    SGContactMatch *_contactMatch;
    NSString *_mainStoreLinkedIdentifier;
}

@property (retain, nonatomic) SGContactMatch *contactMatch;
@property (retain, nonatomic) SGContact *contact;
@property (retain, nonatomic) NSString *mainStoreLinkedIdentifier;

+ (id)suggestionFromContactMatch:(id)arg1;
+ (void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)arg1 fromSuggestionService:(id)arg2;

@end
