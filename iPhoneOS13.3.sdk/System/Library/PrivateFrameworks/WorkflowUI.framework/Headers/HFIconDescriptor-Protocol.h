//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NAEquatable-Protocol.h>

@class NSString;
@protocol HFIconDescriptor;

@protocol HFIconDescriptor <NSObject, NAEquatable>
@property(readonly, nonatomic) BOOL shouldForceLTR;
@property(readonly, nonatomic) NSString *identifier;

@optional
- (id)iconDescriptorByMergingWithIconDescriptor:(id <HFIconDescriptor>)arg1;
@end

