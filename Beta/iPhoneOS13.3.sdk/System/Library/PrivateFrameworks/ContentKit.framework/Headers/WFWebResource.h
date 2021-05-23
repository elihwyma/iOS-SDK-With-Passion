/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@interface WFWebResource : NSObject <Swift>

{
    NSData *_data;
    NSURL *_URL;
    NSString *_MIMEType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSString *textEncodingName;
@property (nonatomic, readonly) NSString *frameName;

+ (_Bool)supportsSecureCoding;
+ (id)webResourceWithData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
+ (id)webResourceWithURL:(id)arg1;
+ (id)webResourceWithHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)webResourceWithFile:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)loadInWKWebView:(id)arg1;

@end
