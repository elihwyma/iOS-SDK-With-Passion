/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <Swift>

{
    long long _accountID;
    NSArray *_bundleIDs;
    long long _isFirstParty;
    long long _isHidden;
    long long _isPreorder;
    NSString *_searchTerm;
    NSArray *_sortOptions;
    NSArray *_storeIDs;
}

@property long long accountID;
@property (copy) NSArray *bundleIDs;
@property long long isFirstParty;
@property long long isHidden;
@property long long isPreorder;
@property (copy) NSString *searchTerm;
@property (copy) NSArray *sortOptions;
@property (copy) NSArray *storeIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
