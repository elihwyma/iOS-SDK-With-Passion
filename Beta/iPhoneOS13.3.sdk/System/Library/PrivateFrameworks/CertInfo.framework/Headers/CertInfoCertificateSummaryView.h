/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIView.h>

@class CertInfoCertificateHeaderCell, CertInfoCertificateSummaryDescriptionCell, NSDate, NSString, UITableView;

@interface CertInfoCertificateSummaryView : UIView

{
    UITableView *_tableView;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_purpose;
    NSDate *_expirationDate;
    CDUnknownBlockType _moreDetailsSelectedBlock;
    CertInfoCertificateHeaderCell *_headerCell;
    CertInfoCertificateSummaryDescriptionCell *_descriptionCell;
}

@property (retain, nonatomic) CertInfoCertificateHeaderCell *headerCell;
@property (retain, nonatomic) CertInfoCertificateSummaryDescriptionCell *descriptionCell;
@property (nonatomic, readonly) UITableView *tableView;
@property (retain, nonatomic) NSString *trustTitle;
@property (retain, nonatomic) NSString *trustSubtitle;
@property (retain, nonatomic) NSString *purpose;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1;
- (void)setMoreDetailsSelectedBlock:(CDUnknownBlockType)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;

@end
