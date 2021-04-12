//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDate, NSString;
@protocol CertInfoSheetViewControllerDelegate;

@interface CertInfoSheetViewController : UIViewController
{
    NSString *_serviceName;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_trustPurpose;
    NSDate *_trustExpiration;
    NSArray *_trustProperties;
    id <CertInfoSheetViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CertInfoSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *trustProperties; // @synthesize trustProperties=_trustProperties;
@property(retain, nonatomic) NSDate *trustExpiration; // @synthesize trustExpiration=_trustExpiration;
@property(retain, nonatomic) NSString *trustPurpose; // @synthesize trustPurpose=_trustPurpose;
@property(retain, nonatomic) NSString *trustSubtitle; // @synthesize trustSubtitle=_trustSubtitle;
@property(retain, nonatomic) NSString *trustTitle; // @synthesize trustTitle=_trustTitle;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
// - (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)_pushDetailsView;
- (void)_setupNavItem;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end

