/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ENXMLDTD : NSObject

{
    struct _xmlDtd *_dtd;
    NSString *_docTypeDeclaration;
}

@property (retain, nonatomic) NSString *docTypeDeclaration;

+ (void)initialize;
+ (id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2;
+ (id)enexDTD;
+ (id)enml2dtd;
+ (id)lat1DTD;
+ (id)symbolDTD;
+ (id)specialDTD;

- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (struct _xmlEntity *)xmlEntityNamed:(id)arg1;
- (struct _xmlElement *)xmlElementNamed:(id)arg1;
- (_Bool)isElementLegal:(id)arg1;
- (id)sanitizedAttributes:(id)arg1 forElement:(id)arg2;
- (_Bool)isAttributeLegal:(id)arg1 inElement:(id)arg2;

@end
