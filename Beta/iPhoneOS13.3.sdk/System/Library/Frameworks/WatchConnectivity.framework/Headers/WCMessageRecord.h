/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface WCMessageRecord : NSObject

{
    _Bool _expectsResponse;
    NSString *_identifier;
    CDUnknownBlockType _errorHandler;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (readonly) _Bool expectsResponse;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) CDUnknownBlockType errorHandler;
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
