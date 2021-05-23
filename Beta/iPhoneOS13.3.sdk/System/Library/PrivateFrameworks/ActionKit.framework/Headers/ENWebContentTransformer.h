/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSValueTransformer.h>

@class ENMLWriter, ENNote, ENWebArchive, ENXMLDTD, ENXMLSaxParser, NSArray, NSString, NSURL;

@interface ENWebContentTransformer : NSValueTransformer

{
    _Bool _inTitleElement;
    NSString *_title;
    NSString *_mimeType;
    NSURL *_baseURL;
    ENXMLSaxParser *_htmlParser;
    ENMLWriter *_enmlWriter;
    ENXMLDTD *_enmlDTD;
    NSURL *_archiveBaseURL;
    ENWebArchive *_webArchive;
    ENNote *_note;
    NSArray *_ignorableTags;
    NSArray *_ignorableAttributes;
    NSArray *_skipTags;
    NSArray *_inlineElements;
    unsigned long long _ignoreElementCount;
}

@property (retain, nonatomic) ENXMLSaxParser *htmlParser;
@property (retain, nonatomic) ENMLWriter *enmlWriter;
@property (retain, nonatomic) ENXMLDTD *enmlDTD;
@property (retain, nonatomic) NSURL *archiveBaseURL;
@property (retain, nonatomic) ENWebArchive *webArchive;
@property (retain, nonatomic) ENNote *note;
@property (retain, nonatomic) NSArray *ignorableTags;
@property (retain, nonatomic) NSArray *ignorableAttributes;
@property (retain, nonatomic) NSArray *skipTags;
@property (retain, nonatomic) NSArray *inlineElements;
@property (nonatomic) unsigned long long ignoreElementCount;
@property (nonatomic) _Bool inTitleElement;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)transformedValue:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (id)filenameFromURL:(id)arg1;
- (id)htmlFromWebArchive:(id)arg1;
- (id)archiveBaseURLFromURL:(id)arg1;
- (id)sanitizeURLAttribute:(id)arg1;
- (id)mimeTypeFromFilename:(id)arg1;
- (id)resourceFromWebResource:(id)arg1;

@end
