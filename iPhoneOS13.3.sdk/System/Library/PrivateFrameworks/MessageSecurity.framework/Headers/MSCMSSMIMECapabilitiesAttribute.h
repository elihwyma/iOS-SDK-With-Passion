//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>
{
    NSSet *_capabilities;
}

@property(readonly) NSSet *capabilities; // @synthesize capabilities=_capabilities;
// - (void).cxx_destruct;
- (id)encodeAttributeWithError:(id )arg1;
- (id)init;
- (id)initWithAttribute:(id)arg1 error:(id )arg2;

@end

