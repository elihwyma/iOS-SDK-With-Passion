/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol REElementDataSourceActivityDelegate, REElementDataSourceDelegate;

@interface REElementDataSource : NSObject

{
    id <REElementDataSourceActivityDelegate> _activityDelegate;
    _Bool _running;
    _Bool _allowsLocationUse;
    _Bool _unlockedSinceBoot;
    id <REElementDataSourceDelegate> _delegate;
    unsigned long long _state;
    NSString *_logHeader;
}

@property (weak, nonatomic) id <REElementDataSourceDelegate> delegate;
@property (nonatomic, readonly) NSArray *supportedSections;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic) _Bool allowsLocationUse;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSString *logHeader;
@property (nonatomic, readonly, getter=hasUnlockedSinceBoot) _Bool unlockedSinceBoot;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *dataSourceProperties;

+ (id)bundleIdentifier;
+ (id)contentAttributes;
+ (id)applicationBundleIdentifier;
+ (_Bool)wantsPrivateQueue;
+ (_Bool)drivenByUserInteraction;
+ (id)overrideDataSourceImage;
+ (id)overrideLocalizedDataSourceName;
+ (_Bool)wantsAppPrewarm;
+ (_Bool)wantsLocationInUseAsserton;
+ (_Bool)supportsPersistence;
+ (CDStruct_2ec95fd7)minimumSupportedSystemVersion;
+ (_Bool)wantsReloadForSignificantTimeChange;
+ (_Bool)wantsReloadForFirstDeviceUnlock;
+ (_Bool)wantsAutomaticFetching;
+ (unsigned long long)elementContentMode;

- (id)init;
- (void)pause;
- (void)resume;
- (_Bool)isWhitelisted;
- (void)setRunning:(_Bool)arg1;
- (id)activityDelegate;
- (void)setActivityDelegate:(id)arg1;
- (void)setUnlockedSinceBoot:(_Bool)arg1;
- (void)beginActivity:(id)arg1;
- (void)beginFetchingData;
- (void)finishFetchingData;
- (void)loadLoggingHeader;
- (void)finishActivity:(id)arg1;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getElementsInSection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (id)complicationDescriptor;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;

@end
