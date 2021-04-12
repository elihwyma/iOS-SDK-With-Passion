//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSString;

@interface WFRemoteQuarantineDecision : MTLModel <MTLJSONSerializing>
{
    NSUInteger _policy;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(readonly, nonatomic) NSUInteger policy; // @synthesize policy=_policy;
// - (void).cxx_destruct;

@end

