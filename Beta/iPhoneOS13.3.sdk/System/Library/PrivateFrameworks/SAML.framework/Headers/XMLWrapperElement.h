/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, XMLWrapperQuery;

__attribute__((visibility("hidden")))
@interface XMLWrapperElement : NSObject

{
    struct _xmlNode *_xmlNode;
    _Bool _ownsXMLNode;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_namespaces;
    NSMutableArray *_elements;
    NSString *_tagName;
    NSString *_textContent;
    NSArray *_childElementSequence;
    XMLWrapperQuery *_query;
}

@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) XMLWrapperQuery *query;
@property (retain, nonatomic) NSString *textContent;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSDictionary *namespaces;
@property (nonatomic, readonly) NSArray *elements;
@property (retain, nonatomic) NSArray *childElementSequence;

- (void)dealloc;
- (void)setElements:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (void)setNamespace:(id)arg1;
- (id)attributeWithName:(id)arg1;
- (id)initWithTagName:(id)arg1 error:(id *)arg2;
- (id)firstElementByTagName:(id)arg1;
- (void)setAttributeWithName:(id)arg1 value:(id)arg2;
- (void)replaceChildElement:(id)arg1 newElement:(id)arg2;
- (void)addChildElement:(id)arg1 before:(id)arg2;
- (void)addChildElement:(id)arg1;
- (id)initWithNode:(struct _xmlNode *)arg1 doc:(struct _xmlDoc *)arg2 query:(id)arg3 error:(id *)arg4;
- (struct _xmlNode *)xmlNode:(id *)arg1;
- (id)getResultsByXpathQuery:(id)arg1;
- (void)reorderChildElements;
- (void)removeChildElement:(id)arg1;
- (id)firstResultByXpathQuery:(id)arg1;
- (id)xmlString:(id *)arg1;

@end
