/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSCurationDebugObject.h>

@protocol CLSInvestigationItem;

@interface CLSCurationDebugItem : CLSCurationDebugObject

{
    unsigned long long _dedupingType;
    CLSCurationDebugItem *_dedupedDebugItem;
    id <CLSInvestigationItem> _item;
}

@property (retain, nonatomic) id <CLSInvestigationItem> item;

+ (id)stringForDedupingType:(unsigned long long)arg1;

- (id)identifier;
- (id)dictionaryRepresentation;
- (id)timestamp;
- (id)initWithItem:(id)arg1;
- (void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2;

@end
