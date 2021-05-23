/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

@class NSString, XMLWrapperNamespace;

__attribute__((visibility("hidden")))
@interface XMLWrapperAttribute : NSObject

{
    struct _xmlAttr *_attributeNode;
    int _type;
    NSString *_name;
    NSString *_value;
    XMLWrapperNamespace *_ns;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) XMLWrapperNamespace *ns;
@property (nonatomic) int type;

- (id)initWithNode:(struct _xmlAttr *)arg1 error:(id *)arg2;
- (_Bool)xmlAttrNodeForNode:(struct _xmlNode *)arg1 error:(id *)arg2;

@end
