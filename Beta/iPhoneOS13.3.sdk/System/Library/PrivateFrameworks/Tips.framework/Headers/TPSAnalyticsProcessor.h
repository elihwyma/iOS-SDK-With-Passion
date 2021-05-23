/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, TPSAnalyticsEventController, TPSDuetDataProvider;

@protocol TPSAnalyticsProcessorDataSource;

@interface TPSAnalyticsProcessor : NSObject

{
    TPSAnalyticsEventController *_analyticsEventController;
    TPSDuetDataProvider *_duetDataProvider;
    NSString *_dateLastRunKey;
    id <TPSAnalyticsProcessorDataSource> _dataSource;
}

@property (nonatomic, readonly) TPSDuetDataProvider *duetDataProvider;
@property (weak, nonatomic) id <TPSAnalyticsProcessorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSDate *dateLastRun;

+ (void)saveValue:(id)arg1 forKey:(id)arg2;
+ (id)loadValueForKey:(id)arg1 class:(Class)arg2;

- (id)init;
- (void)processAnalytics:(CDUnknownBlockType)arg1;
- (void)setDuetDataProvider:(id)arg1;

@end
