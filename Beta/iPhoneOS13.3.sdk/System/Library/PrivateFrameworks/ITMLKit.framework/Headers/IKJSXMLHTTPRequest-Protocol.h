/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMDocument, NSDictionary, NSString;

@protocol IKJSXMLHTTPRequest <Swift>

@property unsigned long long timeout;
@property (readonly) unsigned int readyState;
@property (readonly) unsigned int status;
@property (retain, readonly) NSString *statusText;
@property (readonly) NSString *responseText;
@property (readonly) IKDOMDocument *responseXML;
@property (retain) NSString *responseType;
@property (readonly) id response;
@property (readonly) NSDictionary *metrics;

- (unsigned short)init;
- (unsigned short)abort;
- (unsigned short)send: /* Error: Ran out of types for this method. */;
- (unsigned short)open::::: /* Error: Ran out of types for this method. */;
- (unsigned short)setRequestHeader:: /* Error: Ran out of types for this method. */;
- (unsigned short)getResponseHeader: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllResponseHeaders;

@end
