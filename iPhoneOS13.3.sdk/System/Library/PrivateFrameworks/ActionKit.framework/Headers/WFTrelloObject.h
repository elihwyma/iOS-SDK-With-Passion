//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>

@class NSString;

@interface WFTrelloObject : MTLModel <NSSecureCoding, MTLJSONSerializing, WFNaming>
{
    NSString *_name;
    NSString *_identifier;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *wfName;

@end
