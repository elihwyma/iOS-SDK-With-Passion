/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface NSSubstituteWebResource : NSObject

{
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

- (void)dealloc;
- (id)data;
- (id)URL;
- (id)MIMEType;
- (id)textEncodingName;
- (Class)_webResourceClass;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)frameName;
- (id)webResource;

@end
