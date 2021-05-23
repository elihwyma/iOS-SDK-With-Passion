/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface NWSSnapshot : NSObject

{
    struct nstat_counts _counts;
    unsigned long long _changeSeqno;
    unsigned long long _sourceIdentifier;
    NSString *_provider;
    NSDictionary *_traditionalDictionary;
}

@property (readonly) unsigned int _rxDuplicateBytes;
@property (readonly) unsigned int _rxOutOfOrderBytes;
@property (readonly) unsigned int _txRetransmittedBytes;
@property (readonly) unsigned int _connectAttempts;
@property (readonly) unsigned int _connectSuccesses;
@property (readonly) double _rttMinimum;
@property (readonly) double _rttAverage;
@property (readonly) double _rttVariation;
@property (readonly) unsigned long long rxPackets;
@property (readonly) unsigned long long rxBytes;
@property (readonly) unsigned long long txPackets;
@property (readonly) unsigned long long txBytes;
@property (readonly) unsigned long long rxCellularBytes;
@property (readonly) unsigned long long rxWiFiBytes;
@property (readonly) unsigned long long rxWiredBytes;
@property (readonly) unsigned long long txCellularBytes;
@property (readonly) unsigned long long txWiFiBytes;
@property (readonly) unsigned long long txWiredBytes;
@property (readonly) unsigned long long changeSeqno;
@property (readonly) unsigned long long sourceIdentifier;
@property (readonly) NSString *provider;
@property (readonly) NSDictionary *traditionalDictionary;

- (id)description;
- (id)_createCountsForProvider:(int)arg1;
- (id)_initWithCounts:(const struct nstat_counts *)arg1 sourceIdent:(unsigned long long)arg2 seqno:(unsigned long long)arg3;

@end
