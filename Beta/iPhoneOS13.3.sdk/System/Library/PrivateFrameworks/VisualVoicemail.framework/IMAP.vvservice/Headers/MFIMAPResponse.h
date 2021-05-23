/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class MFIMAPResponseConsumer, NSArray, NSDictionary, NSString;

@interface MFIMAPResponse : NSObject

{
    unsigned int _responseType:8;
    NSString *_tag;
    NSDictionary *_keyValuePairs;
    union _IMAPResponseData _data;
    MFIMAPResponseConsumer *_responseConsumer;
}

@property (retain, nonatomic) MFIMAPResponseConsumer *responseConsumer;
@property (copy, nonatomic) NSArray *privateNamespaces;
@property (copy, nonatomic) NSArray *publicNamespaces;
@property (copy, nonatomic) NSArray *sharedNamespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)flags;
- (id)tag;
- (id)parameters;
- (unsigned long long)number;
- (void)setNumber:(unsigned long long)arg1;
- (void)setFlags:(id)arg1;
- (void)setTag:(id)arg1;
- (id)separator;
- (id)userData;
- (id)capabilities;
- (void)setCapabilities:(id)arg1;
- (int)responseType;
- (int)responseCode;
- (id)extraAttributes;
- (void)setSearchResults:(id)arg1;
- (id)searchResults;
- (id)fetchResults;
- (void)setFetchResults:(id)arg1;
- (id)serverInfo;
- (void)setServerInfo:(id)arg1;
- (id)responseInfo;
- (id)responseName;
- (id)initWithResponseType:(int)arg1;
- (void)setResponseType:(int)arg1;
- (id)mailboxName;
- (id)keyValuePairs;
- (_Bool)isResponseWithCode:(int)arg1;
- (_Bool)isAlertResponse;
- (id)userString;
- (id)statusEntries;
- (_Bool)isUntagged;
- (id)initWithConnection:(id)arg1 responseConsumer:(id)arg2;
- (unsigned long long)mailboxAttributes;
- (id)quotas;
- (void)setUidFlagsChange:(int)arg1;
- (void)setUids:(id)arg1;
- (void)setFlagsFetchResult:(id)arg1;
- (id)fetchResultWithType:(int)arg1;
- (id)uids;
- (id)_descriptionWithFullData:(_Bool)arg1;
- (id)quotaRootNames;
- (id)quotaRootName;
- (int)uidFlagsChange;
- (id)flagsFetchResult;
- (void)setUserData:(id)arg1 responseCode:(int)arg2 responseInfo:(id)arg3;
- (void)setMailboxName:(id)arg1 statusEntries:(id)arg2;
- (void)setMailboxAttributes:(unsigned long long)arg1 separator:(id)arg2 mailboxName:(id)arg3 extraAttributes:(id)arg4;
- (void)setMailboxName:(id)arg1 quotaRootNames:(id)arg2;
- (void)setQuotaRootName:(id)arg1 quotas:(id)arg2;
- (void)setResponseName:(id)arg1 parameters:(id)arg2;

@end
