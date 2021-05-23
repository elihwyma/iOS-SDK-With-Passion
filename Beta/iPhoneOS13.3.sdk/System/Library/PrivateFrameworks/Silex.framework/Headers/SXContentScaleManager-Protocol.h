/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXContentScaleManagerDelegate;

@protocol SXContentScaleManager <Swift>

@property (nonatomic, readonly) long long contentScale;
@property (nonatomic, readonly) double contentScaleFactor;
@property (weak, nonatomic) id <SXContentScaleManagerDelegate> delegate;

- (unsigned short)reset;
- (unsigned short)increase;
- (unsigned short)decrease;

@end
