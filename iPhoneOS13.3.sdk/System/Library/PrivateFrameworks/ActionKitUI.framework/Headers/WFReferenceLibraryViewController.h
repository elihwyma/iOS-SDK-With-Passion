//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIReferenceLibraryViewController.h>

@protocol WFReferenceLibraryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController
{
    id <WFReferenceLibraryViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WFReferenceLibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;

@end

