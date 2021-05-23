/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@protocol WDTableViewSectionDelegate;

@interface WDTableViewSection : NSObject

{
    id <WDTableViewSectionDelegate> _delegate;
    unsigned long long _section;
}

@property (nonatomic, readonly) id <WDTableViewSectionDelegate> delegate;
@property (nonatomic, readonly) unsigned long long section;

- (unsigned long long)numberOfRows;
- (void)viewWillAppear:(_Bool)arg1;
- (void)activate;
- (void)deactivate;
- (double)estimatedHeightForRow:(unsigned long long)arg1;
- (double)heightForRow:(unsigned long long)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (double)heightForHeader;
- (id)titleForHeader;
- (id)initWithDelegate:(id)arg1 atSection:(unsigned long long)arg2;
- (void)setUpWithTableViewController:(id)arg1;
- (void)reloadAnimated:(_Bool)arg1;
- (id)viewForHeader:(id)arg1;
- (id)viewForFooter:(id)arg1;
- (id)titleForFooter;
- (double)heightForFooter;
- (void)accessoryButtonTappedForRow:(unsigned long long)arg1;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (id)willSelectRow:(id)arg1;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
