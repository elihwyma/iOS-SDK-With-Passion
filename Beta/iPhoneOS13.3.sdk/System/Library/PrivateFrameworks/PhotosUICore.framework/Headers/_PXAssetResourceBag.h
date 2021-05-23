/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface _PXAssetResourceBag : NSObject

{
    long long _resourceType;
    NSURL *_url;
}

@property (nonatomic, readonly) long long resourceType;
@property (nonatomic, readonly) NSURL *url;

- (id)initWithResourceType:(long long)arg1 atURL:(id)arg2;

@end
