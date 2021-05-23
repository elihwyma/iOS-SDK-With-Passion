/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICJSSignConfiguration;

@interface ICJSSign : NSObject

{
    ICJSSignConfiguration *_configuration;
}

- (id)initWithConfiguration:(id)arg1;
- (id)signatureStringWithURLRequest:(id)arg1;
- (id)signatureDataWithURLRequest:(id)arg1;

@end
