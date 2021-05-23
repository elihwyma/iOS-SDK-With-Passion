/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSString.h>

@interface NSString (NSString_FirstWordExtensions)

@property (readonly) NSString *stringByEscapingXMLEntities;
@property (readonly) NSString *stringByUnescapingXMLEntities;

- (id)lowercaseFirstWordString;
- (id)uppercaseFirstWordString;
- (_Bool)consistsOfCharactersFromSet:(id)arg1 options:(unsigned long long)arg2;

@end
