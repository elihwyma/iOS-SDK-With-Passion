/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RKRankedResponse : NSObject

{
    NSString *_response;
    unsigned long long _inputMethod;
    double _score;
}

@property (retain) NSString *response;
@property unsigned long long inputMethod;
@property double score;

- (id)initWithResponse:(id)arg1 inputMethod:(unsigned long long)arg2 score:(double)arg3;

@end
