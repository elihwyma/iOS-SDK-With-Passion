/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSArray;

@protocol PXRunNodeDelegate;

@protocol PXRunNode <Swift>

@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) _Bool waiting;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly, getter=isComplete) _Bool complete;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (weak, nonatomic) id <PXRunNodeDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dependencies;

- (unsigned short)cancel;

@end
