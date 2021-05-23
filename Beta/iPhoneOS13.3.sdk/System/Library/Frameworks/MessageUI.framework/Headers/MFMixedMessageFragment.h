/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface MFMixedMessageFragment : NSObject

{
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}

- (id)description;
- (id)baseURL;
- (id)mimeType;
- (id)markupString;
- (id)initWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3;
- (id)markupData;
- (id)encodingName;

@end
