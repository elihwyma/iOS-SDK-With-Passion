/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSBundleInfo.h>

@class NSString;

@interface FBSExtensionInfo : FBSBundleInfo

{
    NSString *_typeIdentifier;
    NSString *_extensionIdentifier;
}

@property (copy, nonatomic, readonly) NSString *typeIdentifier;
@property (copy, nonatomic, readonly) NSString *extensionIdentifier;

- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithPlugInKitProxy:(id)arg1;

@end
