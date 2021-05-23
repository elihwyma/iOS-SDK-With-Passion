/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSLazyApplicationInfoProvider : NSObject

{
    Class _applicationInfoSubclass;
}

@property (nonatomic) Class applicationInfoSubclass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)applicationInfoForBundleIdentifier:(id)arg1;

@end
