/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADDESRecordManager : ADSingleton

{
    NSMutableDictionary *_desRecords;
}

@property (retain, nonatomic) NSMutableDictionary *desRecords;

+ (id)sharedInstance;

- (id)init;
- (id)recordForRequestID:(id)arg1;
- (void)updateAdData:(id)arg1 forRequestID:(id)arg2;
- (void)addTapForRequestID:(id)arg1;
- (void)addImpressionForRequestID:(id)arg1;

@end
