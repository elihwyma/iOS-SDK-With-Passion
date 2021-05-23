/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKOperationGroup, CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState

{
    _Bool _needsContainerMetadataSyncDown;
    _Bool _needsSharedDBSyncDown;
    CKServerChangeToken *_serverChangeToken;
    NSDate *_lastSyncDate;
    CKOperationGroup *_ckGroup;
}

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (retain) NSDate *lastSyncDate;
@property (nonatomic) _Bool needsContainerMetadataSyncDown;
@property (nonatomic) _Bool needsSharedDBSyncDown;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
