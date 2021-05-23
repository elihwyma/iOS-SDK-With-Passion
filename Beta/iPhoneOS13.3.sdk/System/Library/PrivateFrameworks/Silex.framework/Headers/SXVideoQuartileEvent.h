/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaEvent.h>

@interface SXVideoQuartileEvent : SXMediaEvent

{
    unsigned long long _quartile;
}

@property (nonatomic, readonly) unsigned long long quartile;

- (id)initWithQuartile:(unsigned long long)arg1;

@end
