/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject

{
    NSURL *mURL;
    TSDBezierPath *mBezierPath;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) TSDBezierPath *bezierPath;

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;

- (void)dealloc;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;

@end
