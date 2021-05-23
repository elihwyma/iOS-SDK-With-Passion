/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXContentScaleManagerDelegate;

@interface SXContentScaleManager : NSObject

{
    long long _contentScale;
    double _contentScaleFactor;
    id <SXContentScaleManagerDelegate> _delegate;
}

@property (nonatomic) long long contentScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double contentScaleFactor;
@property (weak, nonatomic) id <SXContentScaleManagerDelegate> delegate;

- (void)reset;
- (void)increase;
- (void)decrease;
- (id)initWithContentScale:(long long)arg1;

@end
