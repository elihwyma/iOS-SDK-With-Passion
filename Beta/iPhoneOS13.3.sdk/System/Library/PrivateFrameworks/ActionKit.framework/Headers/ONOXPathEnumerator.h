/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSEnumerator.h>

@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator

{
    struct _xmlXPathObject *_xmlXPath;
    unsigned long long _cursor;
    ONOXMLDocument *_document;
}

@property (nonatomic) struct _xmlXPathObject *xmlXPath;
@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) ONOXMLDocument *document;

- (void)dealloc;
- (id)objectAtIndex:(long long)arg1;
- (id)nextObject;
- (id)allObjects;

@end
