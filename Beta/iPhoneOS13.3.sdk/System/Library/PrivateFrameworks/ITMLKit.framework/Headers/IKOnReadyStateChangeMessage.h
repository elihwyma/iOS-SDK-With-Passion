/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface IKOnReadyStateChangeMessage : NSObject

{
    unsigned int _readyState;
    unsigned int _statusCode;
    NSString *_statusText;
    NSError *_error;
}

@property (nonatomic, readonly) unsigned int readyState;
@property (nonatomic, readonly) unsigned int statusCode;
@property (copy, nonatomic) NSString *statusText;
@property (copy, nonatomic) NSError *error;

- (id)initWithReadyState:(unsigned int)arg1 statusCode:(unsigned int)arg2 statusText:(id)arg3 error:(id)arg4;

@end
