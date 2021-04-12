//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface MCCloudConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSDictionary *_memberQueueDetails;
    NSDictionary *_memberQueueSetAsideDetails;
}

+ (id)sharedConfiguration;
@property(retain, nonatomic) NSDictionary *memberQueueSetAsideDetails; // @synthesize memberQueueSetAsideDetails=_memberQueueSetAsideDetails;
@property(retain, nonatomic) NSDictionary *memberQueueDetails; // @synthesize memberQueueDetails=_memberQueueDetails;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
// - (void).cxx_destruct;
- (id)tvProviderUserToken;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isProvisionallyEnrolled;
- (id)languageScript;
- (id)region;
- (id)language;
- (id)diagnosticsUploadURL;
- (int)userMode;
- (BOOL)isAwaitingConfiguration;
- (BOOL)isTeslaEnrolled;
- (BOOL)isSupervised;
@property(copy, nonatomic) NSDictionary *setAsideDetails;
@property(copy, nonatomic) NSDictionary *details;
- (void)refreshDetailsFromDisk;
- (id)init;

@end

