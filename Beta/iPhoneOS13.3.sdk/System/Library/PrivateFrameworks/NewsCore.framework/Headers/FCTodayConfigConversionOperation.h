/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NTPBTodayConfig;

@protocol FCContentContext, FCCoreConfiguration;

@interface FCTodayConfigConversionOperation : FCOperation

{
    NSDictionary *_widgetConfiguration;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    CDUnknownBlockType _todayConfigCompletionHandler;
    NTPBTodayConfig *_resultTodayConfig;
    NSArray *_networkEvents;
    NSDictionary *_resultHeldRecordsByType;
}

@property (copy, nonatomic) NTPBTodayConfig *resultTodayConfig;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) NSDictionary *widgetConfiguration;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) CDUnknownBlockType todayConfigCompletionHandler;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;

@end
