/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface MCMDMConfiguration : NSObject

{
    _Bool _isUserEnrollment;
    _Bool _memberQueueUseDevelopmentAPNS;
    _Bool _memberQueueSignMessage;
    int _memberQueueAccessRights;
    NSString *_memberQueueManagingProfileIdentifier;
    NSDictionary *_memberQueueOrganizationInfo;
    NSURL *_memberQueueServerURL;
    NSString *_personaID;
    NSString *_easEnrollmentID;
    NSObject<OS_dispatch_queue> *_memberQueue;
    struct __SecIdentity *_memberQueueIdentity;
    NSString *_memberQueueTopic;
    NSURL *_memberQueueCheckInURL;
    NSDictionary *_memberQueueMDMOptions;
    NSString *_memberQueuePushMagic;
}

@property (nonatomic) _Bool isUserEnrollment;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *easEnrollmentID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier;
@property (nonatomic) struct __SecIdentity *memberQueueIdentity;
@property (retain, nonatomic) NSString *memberQueueTopic;
@property (retain, nonatomic) NSURL *memberQueueServerURL;
@property (retain, nonatomic) NSURL *memberQueueCheckInURL;
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo;
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions;
@property (nonatomic) int memberQueueAccessRights;
@property (nonatomic) _Bool memberQueueUseDevelopmentAPNS;
@property (retain, nonatomic) NSString *memberQueuePushMagic;
@property (nonatomic) _Bool memberQueueSignMessage;

+ (id)sharedConfiguration;

- (id)init;
- (void)refreshDetailsFromDisk;
- (_Bool)readConfigurationOutError:(id *)arg1;
- (void)memberQueueForgetCurrentConfiguration;

@end
