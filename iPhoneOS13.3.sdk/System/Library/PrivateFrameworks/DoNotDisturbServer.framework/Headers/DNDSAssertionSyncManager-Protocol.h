//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDSModeAssertionUpdateResult, DNDStateUpdate;
@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;

@protocol DNDSAssertionSyncManager <NSObject>
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDelegate> delegate;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDataSource> dataSource;
- (void)resume;

@optional
- (void)updateForStateUpdate:(DNDStateUpdate *)arg1;
- (void)updateForModeAssertionUpdateResult:(DNDSModeAssertionUpdateResult *)arg1;
@end

