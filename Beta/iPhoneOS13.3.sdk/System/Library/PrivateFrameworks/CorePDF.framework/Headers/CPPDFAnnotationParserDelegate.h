/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface CPPDFAnnotationParserDelegate : NSObject

{
    NSMutableString *_characters;
    _Bool _parseError;
    struct CGPoint _p[4];
    struct __CFArray *_quadPoints;
    struct CGRect _rect;
    struct __CFDictionary *_annotationDictionary;
    struct __CFString *_id;
    struct __CFString *_otherId;
    struct __CFString *_content;
    struct CGColor *_color;
}

@property (nonatomic, readonly) _Bool parseError;
@property (nonatomic) struct __CFDictionary *annotationDictionary;
@property (nonatomic, readonly) struct CGRect rect;
@property (nonatomic, readonly) struct __CFString *annotationId;
@property (nonatomic, readonly) struct __CFString *otherId;
@property (nonatomic, readonly) struct __CFString *content;
@property (nonatomic, readonly) struct CGColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)addQuadpoints;

@end
