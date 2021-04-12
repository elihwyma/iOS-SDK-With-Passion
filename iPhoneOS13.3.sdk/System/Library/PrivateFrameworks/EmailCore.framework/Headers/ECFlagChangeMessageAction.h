//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalMessageAction.h>

#import <EmailCore/ECFlagChangeMessageActionBuilder-Protocol.h>

@class ECMessageFlagChange, NSArray, NSSet;

@interface ECFlagChangeMessageAction : ECLocalMessageAction <ECFlagChangeMessageActionBuilder>
{
    NSSet *_remoteIDs;
    NSArray *_messages;
    ECMessageFlagChange *_flagChange;
}

@property(retain, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSSet *remoteIDs; // @synthesize remoteIDs=_remoteIDs;
// - (void).cxx_destruct;
- (id)initWithBuilder:(id /* CDUnknownBlockType */)arg1;

@end

