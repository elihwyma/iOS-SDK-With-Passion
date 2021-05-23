/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@protocol CNContactsLogger;

@interface CNTCC : NSObject

{
    _Bool _simulateAccessPrompt;
    _Bool _simulateAccessPromptGranted;
    id <CNContactsLogger> _logger;
    long long _simulateType;
    double _simulateAccessPromptDelay;
}

@property (nonatomic, readonly) id <CNContactsLogger> logger;
@property (nonatomic) long long simulateType;
@property (nonatomic) _Bool simulateAccessPrompt;
@property (nonatomic) _Bool simulateAccessPromptGranted;
@property (nonatomic) double simulateAccessPromptDelay;

+ (id)sharedInstance;

- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (id)_simulateQueue;
- (int)accessPreflight;
- (unsigned char)isAccessRestricted;
- (void)accessRequestWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned char)checkAuditToken:(CDStruct_6ad76789)arg1;
- (void)simulate:(long long)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(_Bool)arg1 withDelay:(double)arg2;

@end
