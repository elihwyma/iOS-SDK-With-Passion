//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NSURL;

@interface ISIconResourceLocator : NSObject <NSSecureCoding>
{
    NSURL *_resourceDirectoryURL;
    NSString *_bundleIdentifier;
    NSDictionary *_iconsDictionary;
    NSString *_preferedResourceName;
}

+ (id)genericIconrResourceLocator;
+ (id)resourceLocatorWithType:(id)arg1;
+ (id)resourceLocatorWithLSIconResourceLocator:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy) NSString *preferedResourceName; // @synthesize preferedResourceName=_preferedResourceName;
@property(copy) NSDictionary *iconsDictionary; // @synthesize iconsDictionary=_iconsDictionary;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSURL *resourceDirectoryURL; // @synthesize resourceDirectoryURL=_resourceDirectoryURL;
// - (void).cxx_destruct;
@property(readonly) BOOL allowLocalizedIcon; // @dynamic allowLocalizedIcon;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

