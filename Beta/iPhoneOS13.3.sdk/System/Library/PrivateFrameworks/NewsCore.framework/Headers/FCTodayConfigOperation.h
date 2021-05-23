/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSString, NTPBTodayConfig;

@protocol FCContentContext, FCCoreConfiguration;

@interface FCTodayConfigOperation : FCOperation

{
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    NSString *_widgetConfigID;
    NSArray *_networkEvents;
    CDUnknownBlockType _todayConfigCompletionHandler;
    NTPBTodayConfig *_resultTodayConfig;
    NSDictionary *_resultHeldRecordsByType;
}

@property (copy, nonatomic) NTPBTodayConfig *resultTodayConfig;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (copy) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) NSString *widgetConfigID;
@property (copy, nonatomic) CDUnknownBlockType todayConfigCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;

@end
