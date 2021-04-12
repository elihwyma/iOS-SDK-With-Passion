//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/STStatusDomainDataDiff-Protocol.h>

@class BSSettings;

@interface STVoiceControlStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>
{
    BSSettings *_changes;
}

+ (BOOL)supportsSecureCoding;
+ (id)diffFromData:(id)arg1 toData:(id)arg2;
@property(readonly, copy, nonatomic) BSSettings *changes; // @synthesize changes=_changes;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)applyToMutableData:(id)arg1;
- (id)dataByApplyingToData:(id)arg1;
- (id)initWithChanges:(id)arg1;
- (id)init;

@end

