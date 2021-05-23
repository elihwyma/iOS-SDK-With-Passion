/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RKNLEventToken : NSObject

{
    unsigned int _tokenID;
    NSString *_string;
    long long _location;
    long long _length;
}

@property (retain) NSString *string;
@property unsigned int tokenID;
@property long long location;
@property long long length;

- (id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3;

@end
