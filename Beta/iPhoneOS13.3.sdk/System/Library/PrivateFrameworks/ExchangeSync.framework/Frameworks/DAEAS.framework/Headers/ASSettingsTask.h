/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class DASettingsRequestParams, NSArray, NSDictionary;

@interface ASSettingsTask : ASTask

{
    int _key;
    NSArray *_getters;
    NSDictionary *_setters;
    DASettingsRequestParams *_requestParams;
    long long _status;
    id _result;
}

@property (nonatomic) int key;
@property (nonatomic) long long status;
@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSArray *getters;
@property (retain, nonatomic) NSDictionary *setters;
@property (retain, nonatomic) DASettingsRequestParams *requestParams;

- (id)init;
- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;

@end
