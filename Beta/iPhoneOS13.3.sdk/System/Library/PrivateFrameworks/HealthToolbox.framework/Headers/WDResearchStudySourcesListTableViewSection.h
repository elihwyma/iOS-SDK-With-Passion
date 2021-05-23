/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection

{
    NSArray *_researchSources;
}

@property (copy, nonatomic) NSArray *researchSources;

- (unsigned long long)numberOfRows;
- (id)titleForHeader;
- (id)noneString;
- (id)titleForFooter;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (void)dataSourceDidUpdate;

@end
