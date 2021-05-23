/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSObject.h>

@interface TKDisplayLinkManagerObserver : NSObject

{
    CDUnknownBlockType _block;
    unsigned long long _frameInterval;
    unsigned long long _displayDidRefreshCount;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)displayDidRefresh:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 frameInterval:(unsigned long long)arg2;

@end
