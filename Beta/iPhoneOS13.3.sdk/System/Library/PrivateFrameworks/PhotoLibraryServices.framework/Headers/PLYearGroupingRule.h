/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSString;

@interface PLYearGroupingRule : NSObject

{
    NSCalendar *_calendar;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(_Bool)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (_Bool)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
- (_Bool)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;
- (unsigned long long)dominantYearForStartDate:(id)arg1 endDate:(id)arg2;

@end
