/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactStore, NSArray, NSNotificationCenter;

@protocol CNCancelable, CNMeContactComparisonStrategy, CNReaderWriterScheduler;

@interface CNUIMeContactMonitor : NSObject

{
    id <CNMeContactComparisonStrategy> _strategy;
    CNContactStore *_contactStore;
    NSNotificationCenter *_notificationCenter;
    id <CNReaderWriterScheduler> _lock;
    id <CNCancelable> _meNotificationToken;
}

@property (retain, nonatomic) id <CNMeContactComparisonStrategy> strategy;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) id <CNReaderWriterScheduler> lock;
@property (retain, nonatomic) id <CNCancelable> meNotificationToken;
@property (nonatomic, readonly) NSArray *meContactIdentifiers;

+ (id)unifiedMeContactMonitor;
+ (id)makeMeContactMonitor;
+ (id)makeUnifiedMeContactMonitor;
+ (id)meContactMonitor;

- (id)init;
- (void)dealloc;
- (void)startMonitoring;
- (id)initWithContactStore:(id)arg1;
- (_Bool)isMeContact:(id)arg1;
- (id)initWithComparisonStrategy:(id)arg1;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 notificationCenter:(id)arg3 schedulerProvider:(id)arg4;
- (void)meChanged:(id)arg1;

@end
