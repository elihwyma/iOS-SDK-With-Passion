/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFIMAPFetchResult, NSArray, NSDictionary, NSString;

typedef void (^CDUnknownBlockType)(void);

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFArray;

union _IMAPResponseData {
    struct {
        int responseCode;
        id responseInfoAndOrUserData;
    } basic;
    NSArray *capabilities;
    unsigned long long number;
    NSArray *flags;
    struct {
        NSString *mailboxName;
        NSDictionary *entries;
    } status;
    NSArray *searchResults;
    struct {
        unsigned long long mailboxAttributes;
        id separatorAndOrMboxName;
        NSArray *extraAttributes;
    } list;
    struct {
        unsigned long long number;
        NSArray *items;
        unsigned long long modSeqNumber;
    } fetch;
    struct {
        NSString *mailboxName;
        NSArray *quotaRootNames;
    } quotaRoot;
    struct {
        NSString *quotaRootName;
        NSArray *quotas;
    } quota;
    struct {
        NSString *uids;
        MFIMAPFetchResult *flagsFetchResult;
        unsigned int change:1;
    } uidFlags;
    NSDictionary *serverInfo;
    struct {
        NSArray *private;
        NSArray *public;
        NSArray *shared;
    } namespace;
    struct {
        NSString *name;
        NSArray *parameters;
    } other;
};
