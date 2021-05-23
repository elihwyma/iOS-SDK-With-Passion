/*
 Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FMFAppAccountInfo : NSObject

{
    NSString *_dsid;
    NSString *_username;
    NSString *_appServerHost;
    NSString *_appAuthToken;
    long long _appAuthTokenStatus;
    NSString *_legacyDsid;
    NSString *_legacyUsername;
}

@property (retain, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appServerHost;
@property (retain, nonatomic) NSString *appAuthToken;
@property (nonatomic) long long appAuthTokenStatus;
@property (retain, nonatomic) NSString *legacyDsid;
@property (retain, nonatomic) NSString *legacyUsername;

- (id)description;

@end
