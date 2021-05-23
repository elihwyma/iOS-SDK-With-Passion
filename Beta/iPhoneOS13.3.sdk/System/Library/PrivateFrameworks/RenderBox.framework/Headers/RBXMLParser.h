/*
 Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

#import <Foundation/NSObject.h>

@class NSString, RBDisplayList;

@protocol RBXMLParserDelegate;

@interface RBXMLParser : NSObject

{
    id <RBXMLParserDelegate> _delegate;
    struct objc_ptr<NSXMLParser *> _xml_parser;
    struct objc_ptr<NSURL *> _base_url;
    struct objc_ptr<RBDisplayList *> _list;
    struct objc_ptr<RBShape *> _shape;
    struct objc_ptr<RBFill *> _fill;
    struct State *_state;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _characters;
    struct cf_ptr<__CFDictionary *> _image_cache;
    struct cf_ptr<__CFDictionary *> _font_cache;
    _Bool _aborted;
    struct CGSize _size;
    CDStruct_0b1c536a _backgroundColor;
}

@property (nonatomic, readonly) RBDisplayList *displayList;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) CDStruct_0b1c536a backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)parserWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3;

- (void)dealloc;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (_Bool)parse;
- (void)abortParsing;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (id).cxx_construct;
- (id)initWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3;

@end
