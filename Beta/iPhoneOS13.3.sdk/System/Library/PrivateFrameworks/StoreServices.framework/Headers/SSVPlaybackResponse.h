/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSHTTPURLResponse, NSURL;

@interface SSVPlaybackResponse : NSObject

{
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_urlResponse;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSHTTPURLResponse *URLResponse;
@property (nonatomic, readonly) NSArray *items;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1 URLResponse:(id)arg2;
- (id)itemForItemIdentifier:(id)arg1;

@end
