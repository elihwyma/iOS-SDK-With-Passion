/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString, UIPDFAnnotation;

__attribute__((visibility("hidden")))
@interface UIPDFAnnotationParserDelegate : NSObject

{
    NSMutableString *_characters;
    _Bool _parseError;
    UIPDFAnnotation *_annotation;
}

@property (retain, nonatomic) UIPDFAnnotation *annotation;
@property (nonatomic, readonly) _Bool parseError;
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

@end
