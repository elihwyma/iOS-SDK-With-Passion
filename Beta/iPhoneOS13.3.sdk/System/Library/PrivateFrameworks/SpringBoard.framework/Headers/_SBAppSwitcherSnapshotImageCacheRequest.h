/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBAppLayout, SBDisplayItem, XBApplicationSnapshot;

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject

{
    _Bool _loadFullSizeSnapshot;
    unsigned long long _sequenceID;
    SBAppLayout *_appLayout;
    SBDisplayItem *_displayItem;
    XBApplicationSnapshot *_snapshot;
}

@property (nonatomic, readonly) unsigned long long sequenceID;
@property (nonatomic) _Bool loadFullSizeSnapshot;
@property (retain, nonatomic) SBAppLayout *appLayout;
@property (retain, nonatomic) SBDisplayItem *displayItem;
@property (retain, nonatomic) XBApplicationSnapshot *snapshot;

- (id)description;
- (id)initWithSequenceID:(unsigned long long)arg1;

@end
