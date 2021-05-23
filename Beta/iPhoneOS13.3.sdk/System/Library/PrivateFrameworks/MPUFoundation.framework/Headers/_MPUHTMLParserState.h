/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPUHTMLParser, NSData, NSMutableArray, NSMutableAttributedString, NSString;

@protocol MPUHTMLParserDelegate;

@interface _MPUHTMLParserState : NSObject

{
    NSData *_data;
    void *_selfRef;
    MPUHTMLParser *_parser;
    id <MPUHTMLParserDelegate> _delegate;
    NSMutableArray *_errors;
    NSMutableAttributedString *_attributedString;
    NSMutableArray *_attributeDictionaries;
    NSMutableArray *_tagStack;
    NSMutableArray *_stringStack;
    struct {
        unsigned int providesDefaultAttributes:1;
        unsigned int providesTagAttributes:1;
        unsigned int providesPrependTagString:1;
    } _delegateCapabilites;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)attributes;
- (id)attributedString;
- (_Bool)parse:(id *)arg1;
- (void)_appendString:(id)arg1;
- (id)initWithParser:(id)arg1 data:(id)arg2;
- (id)currentTagAttributes;
- (id)tagStack;
- (void)_startDocument;
- (void)_endDocument;
- (void)_startElement:(const char *)arg1 attrs:(const char **)arg2;
- (void)_endElement:(const char *)arg1;
- (void)_characters:(const char *)arg1 length:(int)arg2;
- (void)_error:(long long)arg1 msg:(const char *)arg2 args:(char *)arg3;

@end
