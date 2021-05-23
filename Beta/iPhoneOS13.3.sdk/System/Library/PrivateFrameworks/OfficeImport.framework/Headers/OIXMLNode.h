/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject <Swift>

@property (readonly) NSString *name;
@property (retain) NSString *stringValue;
@property (readonly) NSString *XMLString;
@property (readonly) NSString *openingTagString;
@property (readonly) NSString *contentString;
@property (readonly) NSString *closingTagString;

+ (void)_escapeCharacters:(const unsigned short *)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(_Bool)arg3 inString:(id)arg4 appendingToString:(struct __CFString *)arg5;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString *)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;

@end
