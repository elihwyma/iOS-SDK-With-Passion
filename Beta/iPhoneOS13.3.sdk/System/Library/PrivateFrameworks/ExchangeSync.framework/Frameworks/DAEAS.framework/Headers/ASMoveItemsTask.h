/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask

{
    NSArray *_pushedMoveRequests;
    long long _dataclass;
    NSMutableArray *_moveItems;
}

@property (retain, nonatomic) NSMutableArray *moveItems;
@property (retain, nonatomic) NSArray *pushedMoveRequests;
@property (nonatomic) long long dataclass;

- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3;

@end
