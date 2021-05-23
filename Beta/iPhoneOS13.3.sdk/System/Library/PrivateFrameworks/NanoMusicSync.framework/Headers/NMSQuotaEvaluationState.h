/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface NMSQuotaEvaluationState : NSObject

{
    NSNumber *_identifer;
    unsigned long long _itemSize;
    unsigned long long _listTotalSize;
    unsigned long long _listQuota;
    long long _containerIndex;
    long long _itemIndex;
}

@property (retain, nonatomic) NSNumber *identifer;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long listTotalSize;
@property (nonatomic) unsigned long long listQuota;
@property (nonatomic) long long containerIndex;
@property (nonatomic) long long itemIndex;

@end
