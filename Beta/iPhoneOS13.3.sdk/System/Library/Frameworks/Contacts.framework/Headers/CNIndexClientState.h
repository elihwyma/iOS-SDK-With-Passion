/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNChangeHistoryAnchor;

__attribute__((visibility("hidden")))
@interface CNIndexClientState : NSObject <Swift>

{
    _Bool _isFullSyncDone;
    long long _indexVersion;
    CNChangeHistoryAnchor *_fullSyncSnapshotAnchor;
    long long _fullSyncOffset;
}

@property (nonatomic) long long indexVersion;
@property (nonatomic) _Bool isFullSyncDone;
@property (retain, nonatomic) CNChangeHistoryAnchor *fullSyncSnapshotAnchor;
@property (nonatomic) long long fullSyncOffset;

+ (_Bool)supportsSecureCoding;
+ (id)clientStateWithData:(id)arg1 logger:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;

@end
