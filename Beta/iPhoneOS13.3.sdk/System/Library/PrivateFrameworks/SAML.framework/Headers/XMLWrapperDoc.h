/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, XMLWrapperElement, XMLWrapperQuery;

@interface XMLWrapperDoc : NSObject

{
    struct _xmlDoc *_doc;
    struct _xmlNode *_docNode;
    NSMutableDictionary *_namespaces;
    NSData *_xmlData;
    NSData *_schemaData;
    XMLWrapperElement *_documentElement;
    XMLWrapperQuery *_query;
}

@property (retain, nonatomic) NSData *xmlData;
@property (retain, nonatomic) NSData *schemaData;
@property (retain, nonatomic) XMLWrapperElement *documentElement;
@property (retain, nonatomic) XMLWrapperQuery *query;
@property (nonatomic, readonly) NSDictionary *namespaces;

- (void)dealloc;
- (struct _xmlNode *)nodePtr;
- (void)setNamespace:(id)arg1;
- (id)xmlString:(id *)arg1;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (_Bool)createDocument:(id *)arg1;
- (id)createDocumentElement:(id *)arg1;
- (id)getResultsByXpathQuery:(id)arg1 error:(id *)arg2;
- (struct _xmlDoc *)docNode:(id *)arg1;
- (_Bool)setXMLDoc:(id *)arg1;
- (id)firstResultByXpathQuery:(id)arg1 error:(id *)arg2;
- (struct _xmlDoc *)docPtr;

@end
