/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface FBSBundleInfo : NSObject <Swift>

{
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleType;
    NSURL *_bundleURL;
    unsigned long long _sequenceNumber;
    NSUUID *_cacheGUID;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *bundleVersion;
@property (copy, nonatomic, readonly) NSString *bundleType;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (copy, nonatomic, readonly) NSUUID *cacheGUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3;

@end
