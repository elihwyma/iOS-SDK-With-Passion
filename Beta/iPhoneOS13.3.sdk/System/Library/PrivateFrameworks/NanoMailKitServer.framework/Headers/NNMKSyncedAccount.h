/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NNMKSyncedAccount : NSObject

{
    _Bool _shouldArchive;
    _Bool _resendRequested;
    NSString *_accountId;
    NSString *_displayName;
    NSArray *_emailAddresses;
    unsigned long long _resendInterval;
    unsigned long long _sourceType;
    NSString *_username;
    NSString *_localId;
}

@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool shouldArchive;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) _Bool resendRequested;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *localId;

- (id)init;
- (id)account;
- (id)initWithAccount:(id)arg1;

@end
