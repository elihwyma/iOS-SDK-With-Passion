/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver

{
    NSMutableDictionary *_totalSizeByLine;
    NSMutableDictionary *_totalCountByLine;
}

@property (retain) NSMutableDictionary *totalSizeByLine;
@property (retain) NSMutableDictionary *totalCountByLine;

- (void)finish;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)eventMatched:(id)arg1;

@end
