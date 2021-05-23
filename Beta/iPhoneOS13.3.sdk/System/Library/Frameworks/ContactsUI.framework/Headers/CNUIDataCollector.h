/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNUIDataCollectorAggDLogger, CNUIDataCollectorSGLogger, NSString;

@interface CNUIDataCollector : NSObject

{
    CNUIDataCollectorAggDLogger *_aggDLogger;
    NSString *_appIdentifier;
    CNUIDataCollectorSGLogger *_sgLogger;
}

@property (nonatomic, readonly) CNUIDataCollectorAggDLogger *aggDLogger;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) CNUIDataCollectorSGLogger *sgLogger;

+ (_Bool)isEnabled;
+ (id)sharedCollector;

- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (void)logContactActionType:(id)arg1 attributes:(id)arg2;
- (void)logPresentation;
- (void)_reallyLogIndexUsage;
- (void)logIndexUsage;
- (void)logSearchUsage;
- (void)logSearchResultsFetchedSuggested:(_Bool)arg1;
- (void)logSearchResultSelected:(id)arg1;
- (void)logRefreshUsage;
- (void)logGroupsShown:(long long)arg1 totalGroups:(long long)arg2;
- (void)logAddProperty:(id)arg1 contact:(id)arg2;
- (void)logContactShown:(id)arg1;
- (void)logContactCreated:(id)arg1 originalContact:(id)arg2;

@end
