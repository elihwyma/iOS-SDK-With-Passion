/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class IKJSXMLDocument, NSData, NSDictionary, NSHTTPURLResponse, NSString;

__attribute__((visibility("hidden")))
@interface SKUIJSFakeXMLHTTPRequest : IKJSObject

{
    NSData *_data;
    NSDictionary *_performanceMetrics;
    NSHTTPURLResponse *_response;
}

@property (readonly) NSDictionary *metrics;
@property (readonly) unsigned int readyState;
@property (readonly) id response;
@property (readonly) NSString *responseText;
@property (readonly) unsigned int responseType;
@property (readonly) IKJSXMLDocument *responseXML;
@property (readonly) unsigned int status;
@property (retain, readonly) NSString *statusText;

- (id)getResponseHeader:(id)arg1;
- (id)getAllResponseHeaders;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;

@end
