/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKPlayerCredential : GKInternalRepresentation

{
    NSString *_accountName;
    NSString *_authenticationToken;
    GKPlayerInternal *_playerInternal;
    long long _environment;
    unsigned int _scope;
    NSDate *_scopeModificationDate;
    NSString *_altDSID;
    NSString *_DSID;
    NSString *_rawPassword;
}

@property (retain) NSString *accountName;
@property (retain) NSString *authenticationToken;
@property (retain) NSString *altDSID;
@property (retain) NSString *DSID;
@property (retain) NSString *rawPassword;
@property (retain) GKPlayerInternal *playerInternal;
@property long long environment;
@property unsigned int scope;
@property (readonly) NSString *scopeAsString;
@property (retain) NSDate *scopeModificationDate;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
