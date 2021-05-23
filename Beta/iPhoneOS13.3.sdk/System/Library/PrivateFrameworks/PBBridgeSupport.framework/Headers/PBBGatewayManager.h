/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@class BBSettingsGateway, NSArray, NSDateComponents, NSString;

@interface PBBGatewayManager : NSObject

{
    _Bool _isScheduled;
    NSArray *_bbSections;
    unsigned long long _repeatedCallsEnabled;
    BBSettingsGateway *_settingsGateway;
    NSString *_allowedGroupName;
    unsigned long long _doNotDisturbPrivilegedSenderType;
    NSString *_doNotDisturbPrivilegedSenderTypeGroupIdentifier;
    NSDateComponents *_dndFromComponents;
    NSDateComponents *_dndToComponents;
}

@property (nonatomic) unsigned long long repeatedCallsEnabled;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (nonatomic, readonly) NSString *allowedGroupName;
@property (nonatomic, readonly) unsigned long long doNotDisturbPrivilegedSenderType;
@property (nonatomic, readonly) NSString *doNotDisturbPrivilegedSenderTypeGroupIdentifier;
@property (nonatomic, readonly) _Bool isScheduled;
@property (nonatomic, readonly) NSDateComponents *dndFromComponents;
@property (nonatomic, readonly) NSDateComponents *dndToComponents;
@property (retain, nonatomic) NSArray *bbSections;

+ (id)sharedManager;
+ (id)dateComponentsFromDNDScheduleTime:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)loadBBSections;
- (void)loadDNDState;
- (_Bool)repeatedCalls;

@end
