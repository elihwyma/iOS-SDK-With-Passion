/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSString;

__attribute__((visibility("hidden")))
@interface CHPhoneBookIOSManager : NSObject

{
    CNContactStore *_fContactsStore;
}

@property (retain, nonatomic) CNContactStore *fContactsStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)get;

- (id)init;
- (void)fetchAndCacheContactIdentifiersForCalls:(id)arg1;
- (id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id *)arg3;
- (id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(_Bool)arg3;
- (id)fetchContactIdentifiersForHandles:(id)arg1 error:(id *)arg2;
- (id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(_Bool)arg3;
- (id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(_Bool)arg2;
- (id)getPersonsNameForContact:(id)arg1;
- (id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(_Bool)arg3;
- (_Bool)isABContactASuggestion;

@end
