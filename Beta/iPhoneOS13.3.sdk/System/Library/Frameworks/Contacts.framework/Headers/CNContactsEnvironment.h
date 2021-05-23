/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNiOSABPredicateRunner, CNiOSAddressBook, NSArray, NSURL;

@protocol CNContactsLoggerProvider, CNSchedulerProvider, CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;

@interface CNContactsEnvironment : NSObject <Swift>

{
    CNiOSAddressBook *_addressBook;
    id <CNSchedulerProvider> _schedulerProvider;
    NSURL *_baseURL;
    id <SGSuggestionsServiceContactsProtocol> _suggestionsService;
    id <CNSiriIntelligenceSettingsProtocol> _siriIntelligenceSettings;
    NSArray *_delegateInfos;
    CNiOSABPredicateRunner *_abPredicateRunner;
    id <CNContactsLoggerProvider> _loggerProvider;
}

@property (retain, nonatomic) NSArray *delegateInfos;
@property (retain, nonatomic) CNiOSABPredicateRunner *abPredicateRunner;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNContactsLoggerProvider> loggerProvider;
@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (copy, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) id <SGSuggestionsServiceContactsProtocol> suggestionsService;
@property (retain, nonatomic) id <CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;
@property (nonatomic, readonly) _Bool useInMemoryStores;

+ (_Bool)supportsSecureCoding;
+ (id)currentEnvironment;
+ (id)baseURLWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
+ (id)inMemoryURL;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithDelegateInfos:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (void)setAddressBook:(id)arg1;
- (void)makeCurrentEnvironment;

@end
