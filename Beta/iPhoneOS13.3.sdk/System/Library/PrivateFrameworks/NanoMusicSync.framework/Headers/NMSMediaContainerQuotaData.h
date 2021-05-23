/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@interface NMSMediaContainerQuotaData : NSObject

{
    id _quotaRefObj;
    unsigned long long _numItemsAdded;
    unsigned long long _numItemsSkipped;
    unsigned long long _numItemsRemoved;
}

@property (nonatomic) unsigned long long numItemsAdded;
@property (nonatomic) unsigned long long numItemsSkipped;
@property (nonatomic) unsigned long long numItemsRemoved;
@property (weak, nonatomic) id quotaRefObj;
@property (nonatomic, readonly) unsigned long long numItemsAboveQuota;

@end
