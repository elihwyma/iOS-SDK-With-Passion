/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class CalLogNode, NSArray;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CalLogMaster : NSObject

{
    NSArray *_topLevelNodes;
    CalLogNode *_oslogNode;
    CalLogNode *_rootConfigurationNode;
    CalLogNode *_standardOutNode;
    CalLogNode *_userNotificationNode;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notificationRegistrationToken;
    _Bool _hasValidNotificationRegistrationToken;
    _Bool _autoFlush;
}

@property (retain, nonatomic) NSArray *topLevelNodes;
@property (retain, nonatomic) CalLogNode *oslogNode;
@property (retain, nonatomic) CalLogNode *standardOutNode;
@property (retain, nonatomic) CalLogNode *rootConfigurationNode;
@property (retain, nonatomic) CalLogNode *userNotificationNode;
@property (nonatomic) int notificationRegistrationToken;
@property (nonatomic) _Bool hasValidNotificationRegistrationToken;
@property (nonatomic) _Bool autoFlush;

+ (id)sharedLogMaster;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)flush;
- (void)loadPreferredConfiguration;
- (void)registerForConfigUpdateNotifications;
- (void)configureOSLogNode;
- (void)configureUserNotificationNode;
- (void)configureRootConfigurationNode;
- (void)reloadTopLevelNodes;
- (int)findMinimumLevel;
- (id)findWhiteList;
- (id)copyLegacyLoggingDefaultsConvertedToNamespaces;
- (void)processEnvelope:(id)arg1;
- (void)configureStandardOutNode;
- (_Bool)shouldProcessNamespace:(id)arg1;

@end
