//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FPXPCSanitizer : NSObject
{
    NSString *_providerIdentifier;
}

+ (id)permittedErrorDomains;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithProviderDomainIdentifier:(id)arg1;

@end
