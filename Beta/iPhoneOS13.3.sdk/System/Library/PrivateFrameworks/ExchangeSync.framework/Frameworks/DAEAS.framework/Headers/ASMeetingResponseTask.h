/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASMeetingResponseTask : ASTask

{
    NSArray *_responseItems;
}

@property (retain, nonatomic) NSArray *responseItems;

- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (id)initWithResponseItems:(id)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;

@end
