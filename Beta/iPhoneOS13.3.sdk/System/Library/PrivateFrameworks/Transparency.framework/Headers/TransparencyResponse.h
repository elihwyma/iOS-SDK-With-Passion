/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, TransparencyRequest;

@interface TransparencyResponse : NSObject

{
    NSData *_data;
    NSDictionary *_metadata;
    TransparencyRequest *_request;
}

@property (retain) TransparencyRequest *request;
@property (retain) NSData *data;
@property (retain) NSDictionary *metadata;

- (id)initWithRequest:(id)arg1 responseData:(id)arg2 metadata:(id)arg3;
- (id)serverHint;

@end
