/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCHeldRecords, NSArray, NSDictionary;

@protocol FCContentContext;

@interface FCWidgetConfigDataOperation : FCOperation

{
    id <FCContentContext> _context;
    NSDictionary *_widgetConfiguration;
    CDUnknownBlockType _widgetConfigDataCompletionHandler;
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSDictionary *_resultWidgetSectionConfigDictionary;
    NSArray *_resultArticleIDs;
    NSArray *_resultArticleListIDs;
    NSDictionary *_resultHeldRecordsByType;
}

@property (retain, nonatomic) NSArray *recordSources;
@property (retain, nonatomic) NSDictionary *recordSourcesByRecordType;
@property (retain, nonatomic) FCHeldRecords *cachedRecords;
@property (retain, nonatomic) NSDictionary *resultWidgetSectionConfigDictionary;
@property (retain, nonatomic) NSArray *resultArticleIDs;
@property (retain, nonatomic) NSArray *resultArticleListIDs;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) NSDictionary *widgetConfiguration;
@property (copy, nonatomic) CDUnknownBlockType widgetConfigDataCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (id)_recordSourceForRecordType:(id)arg1;
- (void)_finalizeResultFromCachedRecords;
- (void)_collectRecordsFromWidgetConfigDictionary:(id)arg1;

@end
