/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKOperationGroup, CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCSideCarSyncPersistedState : BRCPersistedState

{
    _Bool _needsSync;
    NSDate *_lastSyncDownDate;
    CKServerChangeToken *_changeToken;
    unsigned long long _requestID;
    CKOperationGroup *_ckGroup;
}

@property (readonly) NSDate *lastSyncDownDate;
@property (nonatomic, readonly) CKServerChangeToken *changeToken;
@property (nonatomic, readonly) unsigned long long requestID;
@property (nonatomic) _Bool needsSync;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (unsigned long long)allocateNextRequestID;
- (void)sideCarZoneWasReset;
- (id)initWithZoneHealthState:(id)arg1;

@end
