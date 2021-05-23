/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWUsageSource : NSObject

{
    int _pidForAttribution;
    int _epidForAttribution;
    struct update_subset_for_deltas _prevItems;
    _Bool _removed;
    _Bool _removing;
    _Bool _newSnapshotAvailable;
    _Bool _isADaemon;
    _Bool _startScreenStateOn;
    _Bool _updateScreenStateOn;
    unsigned int _seqno;
    unsigned int _flowFlags;
    int _attributionReason;
    unsigned int _startAppState;
    unsigned int _updateAppState;
    unsigned long long _snapshotRevision;
    unsigned long long _reference;
    double _creationTimestamp;
    NSString *_attributedEntity;
    NSString *_delegateName;
}

@property unsigned long long snapshotRevision;
@property (nonatomic, readonly) unsigned long long reference;
@property unsigned int seqno;
@property _Bool removed;
@property _Bool removing;
@property _Bool newSnapshotAvailable;
@property double creationTimestamp;
@property unsigned int flowFlags;
@property (retain) NSString *attributedEntity;
@property int attributionReason;
@property int pidForAttribution;
@property int epidForAttribution;
@property _Bool isADaemon;
@property (retain) NSString *delegateName;
@property unsigned int startAppState;
@property unsigned int updateAppState;
@property _Bool startScreenStateOn;
@property _Bool updateScreenStateOn;
@property (nonatomic, readonly) struct update_subset_for_deltas *prevItemsPtr;

- (id)createSnapshot:(int)arg1;
- (id)_createNSUUIDForBytes:(unsigned char [16])arg1;
- (_Bool)updateWithUpdate:(struct nstat_msg_src_update_convenient *)arg1 monitor:(id)arg2;
- (id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg1 monitor:(id)arg2;
- (unsigned int)flagsForProvider:(unsigned int)arg1 sockaddr:(struct sockaddr *)arg2;
- (void)saveOldValues:(struct nstat_counts *)arg1;

@end
