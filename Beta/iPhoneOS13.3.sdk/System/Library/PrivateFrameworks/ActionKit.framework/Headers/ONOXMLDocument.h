/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter, NSString, ONOXMLElement;

@interface ONOXMLDocument : NSObject <Swift>

{
    ONOXMLElement *_rootElement;
    struct _xmlDoc *_xmlDocument;
    NSString *_version;
    unsigned long long _stringEncoding;
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_defaultNamespaces;
}

@property (nonatomic) struct _xmlDoc *xmlDocument;
@property (retain, nonatomic) ONOXMLElement *rootElement;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) unsigned long long stringEncoding;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableDictionary *defaultNamespaces;

+ (id)XMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)XMLDocumentWithData:(id)arg1 error:(id *)arg2;
+ (id)HTMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)HTMLDocumentWithData:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(struct _xmlDoc *)arg1;
- (id)elementWithNode:(struct _xmlNode *)arg1;
- (id)XPath:(id)arg1;
- (id)functionResultByEvaluatingXPath:(id)arg1;
- (void)enumerateElementsWithXPath:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateElementsWithXPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)firstChildWithXPath:(id)arg1;
- (id)CSS:(id)arg1;
- (void)enumerateElementsWithCSS:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateElementsWithCSS:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)firstChildWithCSS:(id)arg1;
- (void)definePrefix:(id)arg1 forDefaultNamespace:(id)arg2;
- (id)enumeratorWithXPathObject:(struct _xmlXPathObject *)arg1;

@end
