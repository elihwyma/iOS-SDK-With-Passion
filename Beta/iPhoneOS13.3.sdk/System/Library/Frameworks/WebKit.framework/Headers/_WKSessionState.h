/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _WKSessionState : NSObject

{
    struct SessionState _sessionState;
}

@property (copy, nonatomic, readonly) NSData *data;

- (id)initWithData:(id)arg1;
- (id).cxx_construct;
- (id)_initWithSessionState:(struct SessionState)arg1;

@end
