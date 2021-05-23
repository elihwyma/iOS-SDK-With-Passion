/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol AFDisambiguationAssistance, AFUIDisambiguationAnalyticsManagerDataSource;

@interface AFUIDisambiguationAnalyticsManager : NSObject

{
    id <AFUIDisambiguationAnalyticsManagerDataSource> _dataSource;
    NSArray *_listItems;
    id <AFDisambiguationAssistance> _disambiguationAssistance;
}

@property (weak, nonatomic) id <AFUIDisambiguationAnalyticsManagerDataSource> dataSource;
@property (retain, nonatomic) NSArray *listItems;
@property (retain, nonatomic) id <AFDisambiguationAssistance> disambiguationAssistance;

+ (id)sharedManager;

- (id)_listItemMatchingAceId:(id)arg1;
- (void)_logDisambiguationSelectedEventWithListItem:(id)arg1;
- (id)_allListItems;
- (void)_recordSASMetrics:(id)arg1 withSelectedBundleId:(id)arg2 originalCommandId:(id)arg3;
- (void)logDisambiguationItemSelected:(id)arg1;
- (void)logDisambiguationDismissedEvent;

@end
