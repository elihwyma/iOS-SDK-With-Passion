//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString, SGIdentityKey;

@interface SGCuratedContactKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToCuratedContactKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)initWithExternalId:(int)arg1;
- (id)initWithIdentityKey:(id)arg1;

@end

