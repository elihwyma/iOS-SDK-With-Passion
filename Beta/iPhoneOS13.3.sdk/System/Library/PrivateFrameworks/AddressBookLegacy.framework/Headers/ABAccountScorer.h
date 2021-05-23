/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSString;

@interface ABAccountScorer : NSObject

{
    int _sourceID;
    int _defaultSourceID;
    double _score;
    NSString *_accountType;
    void *_addressBook;
    ACAccountStore *_accountStore;
    void *_account;
}

@property (nonatomic) void *addressBook;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) void *account;
@property (nonatomic) int defaultSourceID;
@property (nonatomic) double score;
@property (retain, nonatomic) NSString *accountType;
@property (nonatomic, readonly) NSString *accountTypeDescription;
@property (nonatomic, readonly) NSString *accountDisambiguationDescription;
@property (nonatomic) int sourceID;

- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 accountStore:(id)arg2 account:(void *)arg3 defaultSourceID:(int)arg4;
- (void)calculateScore;
- (int)_findBestSourceID;

@end
