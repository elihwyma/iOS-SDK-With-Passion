//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFLoggable-Protocol.h>
#import <EmailFoundation/EFPubliclyDescribable-Protocol.h>

@class NSString, NSURL, _EFInvokeOnDeallocToken;

@interface EFSandboxedURLWrapper : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding>
{
    NSURL *_url;
    _EFInvokeOnDeallocToken *_invocable;
    NSString *_sandboxToken;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;
@property(readonly, nonatomic) NSString *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) _EFInvokeOnDeallocToken *invocable; // @synthesize invocable=_invocable;
@property(readonly) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addInvalidationHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithFileURL:(id)arg1;

@end

