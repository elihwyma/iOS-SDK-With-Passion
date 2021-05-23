/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/Swift-Protocol.h>

@class NSDictionary;

@protocol OKActionExports <Swift>

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct CGPoint location;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long touchCount;
@property (nonatomic, readonly) unsigned long long platform;
@property (retain, nonatomic, readonly) NSDictionary *context;

- (unsigned short)setContextObject:forKey: /* Error: Ran out of types for this method. */;

@end
