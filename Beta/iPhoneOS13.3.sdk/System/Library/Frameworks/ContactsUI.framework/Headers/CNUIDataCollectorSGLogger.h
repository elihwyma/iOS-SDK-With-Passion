/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface CNUIDataCollectorSGLogger : NSObject

{
    CDUnknownBlockType _serviceProvider;
    id <CNScheduler> _workQueue;
}

@property (retain, nonatomic) id <CNScheduler> workQueue;
@property (copy, nonatomic, readonly) CDUnknownBlockType serviceProvider;

+ (id)loggerWithSGSuggestionsServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;

- (id)initWithSuggestionsServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2;
- (void)performBlockWithService:(CDUnknownBlockType)arg1;
- (void)logContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3;
- (void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)arg1;

@end
