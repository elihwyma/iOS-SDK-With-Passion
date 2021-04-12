//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKPrivateKey-Protocol.h>

@class CRKIdentityConfiguration, NSData;

@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey>
{
    CRKIdentityConfiguration *_configuration;
}

@property(readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
@property(readonly, nonatomic) struct __SecKey underlyingPrivateKey;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

