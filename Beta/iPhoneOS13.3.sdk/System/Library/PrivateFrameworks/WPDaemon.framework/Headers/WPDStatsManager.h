/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface WPDStatsManager : NSObject

{
    NSString *_name;
    NSDictionary *_scanArray;
    struct NSMutableArray *_regularScanArray;
    struct NSMutableArray *_aggressiveScanArray;
    struct NSMutableArray *_advertisingArray;
    NSObject<OS_dispatch_queue> *_reportQueue;
    double _nextPushTime;
}

@property (nonatomic, readonly) NSString *name;
@property (retain, nonatomic) NSDictionary *scanArray;
@property (retain, nonatomic) NSMutableArray *regularScanArray;
@property (retain, nonatomic) NSMutableArray *aggressiveScanArray;
@property (retain, nonatomic) NSMutableArray *advertisingArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue;
@property (nonatomic) double nextPushTime;

+ (id)getStringFromActivity:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)generateStateDump;
- (void)reportPLStats;
- (id)getStatsDictionary;
- (void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (void)stopActivity:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (void)stopActivity:(unsigned long long)arg1;
- (void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 scanRate:(long long)arg3;
- (id)timeArrayFromArray:(id)arg1;

@end
