/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteNameComponents, CNAutocompleteResultValue, NSArray, NSDictionary, NSNumber, NSString;

@interface CNAutocompleteResult : NSObject

{
    NSString *_displayName;
    _Bool _hasPreferredDomain;
    _Bool _hasPrefixMatch;
    unsigned long long _sourceType;
    CNAutocompleteNameComponents *_nameComponents;
    NSString *_identifier;
    CNAutocompleteResultValue *_value;
    NSDictionary *_userInfo;
    NSString *_lastSendingAddress;
    NSString *_descriptionMemo;
    CDUnknownBlockType _membersProvider;
    CDUnknownBlockType _contactProvider;
    NSArray *_diagnosticLogs;
    CDUnknownBlockType _ignoreResultBlock;
    long long _resultType;
    NSNumber *_recentsIdentifier;
}

@property (copy, readonly) NSString *contactIdentifier;
@property (copy, readonly) NSString *groupIdentifier;
@property (copy, readonly) id address;
@property (readonly) long long addressType;
@property (copy, readonly) NSArray *userInfos;
@property long long resultType;
@property (copy) NSString *displayName;
@property (copy) NSString *identifier;
@property (retain) CNAutocompleteResultValue *value;
@property (copy) CNAutocompleteNameComponents *nameComponents;
@property (copy) NSDictionary *userInfo;
@property (copy) NSString *lastSendingAddress;
@property _Bool hasPreferredDomain;
@property unsigned long long sourceType;
@property (copy, nonatomic) CDUnknownBlockType contactProvider;
@property (copy, nonatomic) CDUnknownBlockType membersProvider;
@property (copy, nonatomic) NSArray *diagnosticLogs;
@property (retain, nonatomic) NSNumber *recentsIdentifier;
@property (copy, nonatomic) CDUnknownBlockType ignoreResultBlock;

+ (unsigned long long)category;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 addressType:(long long)arg5 identifier:(id)arg6 contactProvider:(CDUnknownBlockType)arg7 groupMembersProvider:(CDUnknownBlockType)arg8 userInfo:(id)arg9;
+ (_Bool)isSourceTypeConsideredSuggestion:(unsigned long long)arg1;
+ (id)localeForHashing;
+ (id)comparators;
+ (id)resultWithDisplayName:(id)arg1;
+ (id)contactStoreForFetchingFullContacts;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 identifier:(id)arg4;
+ (id)groupResultWithDisplayName:(id)arg1 identifier:(id)arg2;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5 userInfo:(id)arg6;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3;
+ (id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5;
+ (id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(CDUnknownBlockType)arg5 userInfo:(id)arg6;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)contactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)members:(id *)arg1;
- (id)diagnosticLog;
- (void)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (void)updateUsingInformationFromRelatedResult:(id)arg1;
- (void)addDiagnosticLogFuture:(id)arg1;
- (long long)compare:(id)arg1 withPriorityComparator:(CDUnknownBlockType)arg2;
- (id)stringForHashing;
- (id)resultTypeDescription;
- (id)sourceTypeDescription;

@end
