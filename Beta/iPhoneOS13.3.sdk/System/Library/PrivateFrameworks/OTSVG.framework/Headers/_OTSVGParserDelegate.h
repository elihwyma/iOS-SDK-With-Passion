/*
 Image: /System/Library/PrivateFrameworks/OTSVG.framework/OTSVG
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _OTSVGParserDelegate : NSObject

{
    _Bool errorOccurred;
    unsigned int skipDepth;
    unsigned int unitsPerEm;
    unsigned int elementCount;
    unique_ptr_bd23540c *root;
    vector_61f1bb43 stack;
    unordered_map_aadc992e namespaces;
}

@property _Bool errorOccurred;
@property unsigned int skipDepth;
@property unsigned int unitsPerEm;
@property unsigned int elementCount;
@property unique_ptr_bd23540c *root;
@property vector_61f1bb43 stack;
@property unordered_map_aadc992e namespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (id).cxx_construct;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (id)initWithUnitsPerEm:(unsigned int)arg1;

@end
