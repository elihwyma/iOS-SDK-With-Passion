/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSURL;

@protocol CAMLParserDelegate;

@interface CAMLParser : NSObject

{
    struct _CAMLParserData *_data;
}

@property (retain) NSURL *baseURL;
@property (weak) id <CAMLParserDelegate> delegate;
@property (readonly) NSError *error;
@property (readonly) id result;

+ (id)parseContentsOfURL:(id)arg1;
+ (id)parser;

- (id)init;
- (void)dealloc;
- (_Bool)parseData:(id)arg1;
- (_Bool)parseBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)parseString:(id)arg1;
- (_Bool)parseContentsOfURL:(id)arg1;
- (id)objectById:(id)arg1;
- (id)elementValue;
- (void)setElementValue:(id)arg1;
- (id)attributeForKey:(id)arg1 remove:(_Bool)arg2;
- (id)willLoadResourceFromURL:(id)arg1;
- (void)didLoadResource:(id)arg1 fromURL:(id)arg2;
- (id)didFailToLoadResourceFromURL:(id)arg1;
- (void)parserError:(id)arg1;
- (void)parserWarning:(id)arg1;

@end
