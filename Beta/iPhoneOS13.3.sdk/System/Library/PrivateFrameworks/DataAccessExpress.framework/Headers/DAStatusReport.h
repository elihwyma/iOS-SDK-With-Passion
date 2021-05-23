/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface DAStatusReport : NSObject

{
    _Bool _syncingAllowed;
    int _numHBIDataPoints;
    NSString *_persistentUUID;
    NSString *_displayName;
    NSString *_accountType;
    NSNumber *_timeSpan;
    NSNumber *_timeInNetworking;
    NSNumber *_averageHBI;
    NSNumber *_successfulRequests;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_downloadedElements;
    NSNumber *_uploadedElements;
    NSNumber *_falseMoreAvailableCount;
    NSString *_protocolVersion;
    NSDate *_lastSuccessDate;
    NSDate *_lastFailureDate;
    NSDate *_creationDate;
}

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) int numHBIDataPoints;
@property (retain, nonatomic) NSDate *lastSuccessDate;
@property (retain, nonatomic) NSDate *lastFailureDate;
@property (retain, nonatomic) NSString *persistentUUID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *accountType;
@property (retain, nonatomic) NSNumber *timeSpan;
@property (retain, nonatomic) NSNumber *timeInNetworking;
@property (retain, nonatomic) NSNumber *averageHBI;
@property (retain, nonatomic) NSNumber *successfulRequests;
@property (retain, nonatomic) NSNumber *failedNetworkRequests;
@property (retain, nonatomic) NSNumber *failedProtocolRequests;
@property (retain, nonatomic) NSNumber *downloadedElements;
@property (retain, nonatomic) NSNumber *uploadedElements;
@property (retain, nonatomic) NSNumber *falseMoreAvailableCount;
@property (retain, nonatomic) NSString *protocolVersion;
@property (nonatomic) _Bool syncingAllowed;

- (id)init;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2;
- (void)mergeStatusReport:(id)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFalseMoreAvailableResponse;

@end
