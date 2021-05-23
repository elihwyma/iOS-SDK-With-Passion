/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface WFScanMetricsManager : NSObject

{
    _Bool _submited;
    NSMutableDictionary *_sectionCounts;
    NSDate *_timestamp;
}

@property (retain, nonatomic) NSMutableDictionary *sectionCounts;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) _Bool submited;

- (id)init;
- (void)reset;
- (void)submit;
- (void)ingestScanResults:(id)arg1;
- (id)sectionNameForRecord:(id)arg1;

@end
