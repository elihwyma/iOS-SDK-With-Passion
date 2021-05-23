/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBUIImageDataProvider : NSObject

{
    UIImage *_image;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    _Bool _allowIOSurface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) XBSnapshotDataProviderContext *context;

- (id)fetchImage;
- (id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3 allowIOSurface:(_Bool)arg4;

@end
