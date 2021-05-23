/*
 Image: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
 */

#import <Foundation/NSObject.h>

@class NSURL, NSURLSessionConfiguration;

@interface OspreyServiceClient : NSObject

{
    NSURL *_URL;
    NSURLSessionConfiguration *_Conf;
}

@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSURLSessionConfiguration *Conf;

- (id)initWithURL:(id)arg1 configuration:(id)arg2;

@end
