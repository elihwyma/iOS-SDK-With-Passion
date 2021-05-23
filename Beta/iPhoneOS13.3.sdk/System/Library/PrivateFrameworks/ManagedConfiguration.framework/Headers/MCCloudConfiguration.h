/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol OS_dispatch_queue;

@interface MCCloudConfiguration : NSObject

{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSDictionary *_memberQueueDetails;
    NSDictionary *_memberQueueSetAsideDetails;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (id)init;
- (id)region;
- (int)userMode;
- (_Bool)isSupervised;
- (_Bool)isProvisionallyEnrolled;
- (void)refreshDetailsFromDisk;
- (id)provisionalEnrollmentExpirationDate;
- (_Bool)isTeslaEnrolled;
- (_Bool)isAwaitingConfiguration;
- (id)diagnosticsUploadURL;
- (id)language;
- (id)languageScript;
- (id)tvProviderUserToken;

@end
