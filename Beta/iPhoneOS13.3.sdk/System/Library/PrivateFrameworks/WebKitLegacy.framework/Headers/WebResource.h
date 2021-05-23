/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

#import <WebKitLegacy/Swift-Protocol.h>

@class NSData, NSString, NSURL, WebResourcePrivate;

@interface WebResource : NSObject <Swift>

{
    WebResourcePrivate *_private;
}

@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *MIMEType;
@property (copy, nonatomic, readonly) NSString *textEncodingName;
@property (copy, nonatomic, readonly) NSString *frameName;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_stringValue;
- (id)_response;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)_suggestedFilename;
- (struct ArchiveResource *)_coreResource;
- (id)_initWithCoreResource:(Ref_23906fc6 *)arg1;
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(_Bool)arg7;
- (void)_ignoreWhenUnarchiving;
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;

@end
