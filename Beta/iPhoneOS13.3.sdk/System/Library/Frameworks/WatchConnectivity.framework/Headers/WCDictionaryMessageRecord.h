/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <WatchConnectivity/WCMessageRecord.h>

@interface WCDictionaryMessageRecord : WCMessageRecord

{
    CDUnknownBlockType _responseHandler;
}

@property (copy, readonly) CDUnknownBlockType responseHandler;

- (id)description;
- (_Bool)expectsResponse;
- (id)initWithIdentifier:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
