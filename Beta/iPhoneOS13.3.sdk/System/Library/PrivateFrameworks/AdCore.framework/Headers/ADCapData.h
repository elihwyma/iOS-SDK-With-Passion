/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <AdCore/ADSingleton.h>

@class NSMutableArray, NSString;

@interface ADCapData : ADSingleton

{
    NSString *_toroID;
    NSMutableArray *_frequencyCapData;
    NSMutableArray *_clickCountData;
    NSMutableArray *_downloadData;
}

@property (retain, nonatomic) NSString *toroID;
@property (retain, nonatomic) NSMutableArray *frequencyCapData;
@property (retain, nonatomic) NSMutableArray *clickCountData;
@property (retain, nonatomic) NSMutableArray *downloadData;

+ (id)sharedInstance;

- (id)init;
- (id)dictionaryRepresentation;
- (void)restoreAllCapData;
- (void)resetCapDataObject;
- (id)restoreCapDataArrayFromPlist:(id)arg1;
- (void)checkAndUpdateToroID;
- (void)saveCapDataWithReason:(id)arg1;
- (void)addCapDataObject:(id)arg1 ofKind:(long long)arg2;
- (void)updateCapDataWith:(id)arg1 ofKind:(long long)arg2;
- (id)filteredCapData:(id)arg1 maxItems:(unsigned long long)arg2 expirationThresholdInSeconds:(double)arg3;
- (id)capDataJSON:(id)arg1;
- (id)clickCapObjectForAdamID:(id)arg1;
- (id)downloadObjectForAdamID:(id)arg1;
- (void)eraseCapData;

@end
