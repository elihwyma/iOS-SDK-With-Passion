/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NURegion;

@protocol NUPurgeableImage;

@interface NUPurgeableImageAccessGuard : NSObject

{
    NURegion *_accessRegion;
    id <NUPurgeableImage> _accessImage;
}

- (void)dealloc;
- (id)initWithRegion:(id)arg1 image:(id)arg2;
- (void)_beginAccess;
- (void)_endAccess;

@end
