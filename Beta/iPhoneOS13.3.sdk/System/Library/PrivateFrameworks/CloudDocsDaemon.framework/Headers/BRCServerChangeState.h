/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCServerChangeState : NSObject <Swift>

{
    NSDate *_lastSyncDownDate;
    long long _lastSyncDownStatus;
    CKServerChangeToken *_changeToken;
    unsigned long long _clientRequestID;
}

@property (retain) NSDate *lastSyncDownDate;
@property (nonatomic) long long lastSyncDownStatus;
@property (retain, nonatomic) CKServerChangeToken *changeToken;
@property (nonatomic) unsigned long long clientRequestID;
@property (nonatomic, readonly) _Bool hasNeverSyncedDown;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (_Bool)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3;
- (void)forgetChangeTokens;
- (void)forgetClientRequestID;
- (id)initWithServerSyncState:(id)arg1;

@end
