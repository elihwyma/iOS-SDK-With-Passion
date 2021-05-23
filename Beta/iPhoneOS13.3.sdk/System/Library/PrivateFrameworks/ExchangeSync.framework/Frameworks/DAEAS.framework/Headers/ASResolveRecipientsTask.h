/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSArray, NSDate;

@interface ASResolveRecipientsTask : ASTask

{
    NSArray *_emailAddresses;
    _Bool _retrieveCertificates;
    _Bool _retrieveAvailability;
    NSDate *_startTime;
    NSDate *_endTime;
}

@property (nonatomic) _Bool retrieveCertificates;
@property (nonatomic) _Bool retrieveAvailability;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)initForCertificatesWithEmailAddresses:(id)arg1;
- (id)_roundDownTo30MinuteBoundary:(id)arg1;
- (id)_roundUpTo30MinuteBoundary:(id)arg1;
- (long long)responseStatusForExchangeStatus:(int)arg1;
- (long long)certStatusForExchangeStatus:(int)arg1;
- (long long)availabilityStatusForExchangeStatus:(int)arg1;
- (id)initFreeBusyQueryWithStartDate:(id)arg1 endDate:(id)arg2 emailAddresses:(id)arg3;

@end
