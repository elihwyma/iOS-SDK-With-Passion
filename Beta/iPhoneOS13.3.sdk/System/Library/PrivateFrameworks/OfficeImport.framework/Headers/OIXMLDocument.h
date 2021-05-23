/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OIXMLNode.h>

@class NSString, OIXMLElement;

__attribute__((visibility("hidden")))
@interface OIXMLDocument : OIXMLNode

{
    OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}

@property (retain) OIXMLElement *rootElement;
@property (copy) NSString *version;
@property (copy) NSString *characterEncoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contentString;
- (id)initWithRootElement:(id)arg1;
- (id)openingTagString;
- (id)XMLString;
- (id)closingTagString;
- (id)createMutableXMLString;

@end
