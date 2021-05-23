/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@interface XBSnapshotDataProviderContext : NSObject

{
    double _scale;
    _Bool _opaque;
}

@property (nonatomic) double scale;
@property (nonatomic, getter=isOpaque) _Bool opaque;

@end
