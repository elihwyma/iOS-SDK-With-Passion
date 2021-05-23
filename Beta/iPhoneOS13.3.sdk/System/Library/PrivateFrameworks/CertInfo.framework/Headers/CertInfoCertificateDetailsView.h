/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIView.h>

@class NSMutableArray, NSString, UITableView;

@interface CertInfoCertificateDetailsView : UIView

{
    UITableView *_tableView;
    NSMutableArray *_tableSections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)appendInfoFromCertView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 certificateProperties:(id)arg2;
- (id)_cellInfosForSection:(id)arg1;
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;
- (id)_sectionsFromProperties:(id)arg1;
- (id)_titleForIndexPath:(id)arg1;
- (id)_detailForIndexPath:(id)arg1;

@end
