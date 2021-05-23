/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

@class LKSwitchOperation, NSDate, NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_semaphore;

@interface LKLogEventController : NSObject

{
    _Bool _streamingLogs;
    NSMutableArray *_switchOperationsMutableArray;
    NSMutableDictionary *_mutableKeychainItemsAddedByActivityID;
    LKSwitchOperation *_switchOperation;
    NSObject<OS_dispatch_semaphore> *_dynamicdsema;
    NSDate *_logEnumarationEndTime;
    CDUnknownBlockType _logEventHandler;
}

@property (retain, nonatomic) NSMutableArray *switchOperationsMutableArray;
@property (retain, nonatomic) NSMutableDictionary *mutableKeychainItemsAddedByActivityID;
@property (retain, nonatomic) LKSwitchOperation *switchOperation;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dynamicdsema;
@property (retain, nonatomic) NSDate *logEnumarationEndTime;
@property (nonatomic) _Bool streamingLogs;
@property (copy, nonatomic) CDUnknownBlockType logEventHandler;

+ (id)loginDetailsPredicate;

- (id)init;
- (void)_parseUserManagementFrameworkLog:(id)arg1;
- (void)_parseBuddLog:(id)arg1;
- (void)_parseSpringBoardLog:(id)arg1;
- (_Bool)_needToParseSecurityLogs;
- (_Bool)_isKeychainLog:(id)arg1;
- (void)_parseKeychainLog:(id)arg1;
- (void)_handleKeychainItemEventFromLogEvent:(id)arg1;
- (void)enumuratePersistentLogsSynchronouslyFromDate:(id)arg1 logArchivePath:(id)arg2 predicate:(id)arg3 logEventHandler:(CDUnknownBlockType)arg4;
- (void)enumurateLogEventsSynchronouslyFromDate:(id)arg1 predicate:(id)arg2 logEventHandler:(CDUnknownBlockType)arg3;
- (id)loginDetailsWithStartDate:(id)arg1 logArchivePath:(id)arg2;

@end
