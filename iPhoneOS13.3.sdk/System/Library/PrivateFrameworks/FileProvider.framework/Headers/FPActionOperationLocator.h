//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FPItem, NSString, NSURL;

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding>
{
    NSObject *_object;
}

+ (BOOL)supportsSecureCoding;
+ (id)locatorForItem:(id)arg1;
+ (id)locatorForURL:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresCrossDeviceCopy;
- (void)attachSandboxExtensionOnXPCEncoding;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) id parentIdentifier;
@property(readonly, nonatomic) id identifier;
- (BOOL)isDownloaded;
@property(readonly, nonatomic) NSUInteger size;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) FPItem *asFPItem;
@property(readonly, nonatomic) NSURL *asURL;
@property(readonly, nonatomic) BOOL isProviderItem;
@property(readonly, nonatomic) BOOL isExternalURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(readonly, nonatomic) id underlyingObject;
- (void)_setObject:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithObject:(id)arg1;

@end

