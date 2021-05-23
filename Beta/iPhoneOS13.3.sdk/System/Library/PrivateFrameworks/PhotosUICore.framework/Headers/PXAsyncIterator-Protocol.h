/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXAsyncIterator <Swift>

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) unsigned long long count;

- (unsigned short)stop;
- (unsigned short)next;

@end
