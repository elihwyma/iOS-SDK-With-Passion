//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBProcess, FBSOpenApplicationOptions, NSString;

@interface FBSystemServiceOpenApplicationRequest : NSObject
{
    NSString *_bundleIdentifier;
    FBSOpenApplicationOptions *_options;
    FBProcess *_clientProcess;
    BOOL _trusted;
}

+ (id)request;
@property(retain, nonatomic) FBProcess *clientProcess; // @synthesize clientProcess=_clientProcess;
@property(copy, nonatomic) FBSOpenApplicationOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isTrusted) BOOL trusted; // @synthesize trusted=_trusted;
// - (void).cxx_destruct;
- (id)description;

@end

