/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoViewControllerProviding;

@interface SVCoordinateSpace : NSObject

{
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect bounds;

- (id)view;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (id)initWithVideoViewControllerProvider:(id)arg1;

@end
