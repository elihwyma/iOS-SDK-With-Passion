//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, SAUITemplateEdgeInsets;

@protocol SAUITemplateItem <SAAceSerializable>
@property(nonatomic) BOOL shouldBeOffscreenInPartial;
@property(copy, nonatomic) NSArray *presentationOptions;
@property(retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property(nonatomic) BOOL hasPriorityLayout;
@property(retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property(copy, nonatomic) NSArray *communicationOptions;
@end

