/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface NUHTMLBuilder : NSObject

{
    NSMutableString *_string;
}

@property (retain, nonatomic) NSMutableString *string;

- (id)init;
- (id)appendStrong:(id)arg1;
- (id)appendBreak;
- (id)appendText:(id)arg1;
- (id)appendParagraph:(id)arg1;
- (id)appendLink:(id)arg1 withURL:(id)arg2;
- (id)fullHTML;
- (id)encodeHTMLEntities:(id)arg1;
- (id)HTML;
- (id)URLEncode:(id)arg1;
- (id)appendParagraphText:(id)arg1;
- (id)appendHTML:(id)arg1;

@end
