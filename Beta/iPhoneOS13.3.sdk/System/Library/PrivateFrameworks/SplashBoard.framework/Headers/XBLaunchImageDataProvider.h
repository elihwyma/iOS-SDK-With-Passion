/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage, XBSnapshotDataProviderContext, _FBSSnapshot;

@interface XBLaunchImageDataProvider : NSObject

{
    _FBSSnapshot *_snapshot;
    UIImage *_cachedImage;
    XBSnapshotDataProviderContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) XBSnapshotDataProviderContext *context;

- (void)invalidateImage;
- (id)fetchImage;
- (id)initWithRequest:(id)arg1 contextID:(unsigned int)arg2 opaque:(_Bool)arg3;

@end
