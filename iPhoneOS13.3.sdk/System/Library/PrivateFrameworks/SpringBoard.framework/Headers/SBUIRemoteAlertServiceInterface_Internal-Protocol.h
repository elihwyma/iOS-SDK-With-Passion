//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIRemoteAlertServiceInterface-Protocol.h>

@protocol SBUIRemoteAlertServiceInterface_Internal <SBUIRemoteAlertServiceInterface>
- (void)sb_dismissForAlertAnimated:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)sb_presentForAlertAnimated:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)sb_restoreInputViewsAnimated:(BOOL)arg1;
- (void)sb_preserveInputViewsAnimated:(BOOL)arg1;
- (void)sb_resignFirstResponder;
- (void)sb_becomeFirstResponder;
@end

