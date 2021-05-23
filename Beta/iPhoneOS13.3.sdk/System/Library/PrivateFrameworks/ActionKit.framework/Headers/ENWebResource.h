/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface ENWebResource : NSObject

{
    NSData *_data;
    NSURL *_URL;
    NSString *_MIMEType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) NSString *textEncodingName;
@property (copy, nonatomic) NSString *frameName;

+ (id)webResourceWithDictionary:(id)arg1;

- (id)propertyList;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;

@end
