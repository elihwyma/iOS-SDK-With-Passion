//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DDRemoteActionHostViewController : _UIRemoteViewController
{
    id <DDRemoteActionHostViewControllerDelegate> _delegate;
}

@property __weak id <DDRemoteActionHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

