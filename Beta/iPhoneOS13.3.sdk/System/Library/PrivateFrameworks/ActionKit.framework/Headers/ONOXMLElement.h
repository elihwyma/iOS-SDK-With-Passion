/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, ONOXMLDocument;

@interface ONOXMLElement : NSObject <Swift>

{
    ONOXMLDocument *_document;
    NSString *_rawXMLString;
    NSString *_tag;
    unsigned long long _lineNumber;
    NSString *_namespace;
    ONOXMLElement *_parent;
    ONOXMLElement *_previousSibling;
    ONOXMLElement *_nextSibling;
    NSDictionary *_attributes;
    NSString *_stringValue;
    NSNumber *_numberValue;
    NSDate *_dateValue;
    struct _xmlNode *_xmlNode;
}

@property (copy, nonatomic) NSString *rawXMLString;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) unsigned long long lineNumber;
@property (copy, nonatomic) NSString *namespace;
@property (retain, nonatomic) ONOXMLElement *parent;
@property (retain, nonatomic) NSArray *children;
@property (retain, nonatomic) ONOXMLElement *previousSibling;
@property (retain, nonatomic) ONOXMLElement *nextSibling;
@property (retain, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (nonatomic) struct _xmlNode *xmlNode;
@property (weak, nonatomic) ONOXMLDocument *document;
@property (nonatomic, readonly, getter=isBlank) _Bool blank;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (id)childrenWithTag:(id)arg1;
- (id)XPath:(id)arg1;
- (id)functionResultByEvaluatingXPath:(id)arg1;
- (void)enumerateElementsWithXPath:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateElementsWithXPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)firstChildWithXPath:(id)arg1;
- (id)CSS:(id)arg1;
- (void)enumerateElementsWithCSS:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateElementsWithCSS:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)firstChildWithCSS:(id)arg1;
- (id)valueForAttribute:(id)arg1 inNamespace:(id)arg2;
- (id)firstChildWithTag:(id)arg1;
- (id)firstChildWithTag:(id)arg1 inNamespace:(id)arg2;
- (id)childrenWithTag:(id)arg1 inNamespace:(id)arg2;
- (id)childrenAtIndexes:(id)arg1;
- (id)indexesOfChildrenPassingTest:(CDUnknownBlockType)arg1;
- (struct _xmlXPathObject *)xmlXPathObjectPtrWithXPath:(id)arg1;

@end
