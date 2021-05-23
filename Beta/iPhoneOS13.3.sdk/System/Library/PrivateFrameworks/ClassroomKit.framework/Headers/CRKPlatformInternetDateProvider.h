/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSDate, NSMutableArray, NSString;

@protocol CRKInternetDateFetching;

@interface CRKPlatformInternetDateProvider : NSObject <Swift>

{
    id <CRKInternetDateFetching> _dateFetchingProvider;
    NSDate *_internetDateAndTime;
    double _uptimeAtInternetDateAndTimeFetch;
    NSMutableArray *_completionQueue;
}

@property (retain, nonatomic) id <CRKInternetDateFetching> dateFetchingProvider;
@property (retain, nonatomic) NSDate *internetDateAndTime;
@property (nonatomic) double uptimeAtInternetDateAndTimeFetch;
@property (retain, nonatomic) NSMutableArray *completionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedProvider;

- (id)init;
- (void)fetchInternetDateWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchExistingInternetDate;

@end
