/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSHTTPURLResponse;

__attribute__((visibility("hidden")))
@interface SKUIURLResolverResponse : NSObject

{
    NSData *_data;
    NSHTTPURLResponse *_response;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSHTTPURLResponse *URLResponse;

- (id)initWithData:(id)arg1 URLResponse:(id)arg2;

@end
