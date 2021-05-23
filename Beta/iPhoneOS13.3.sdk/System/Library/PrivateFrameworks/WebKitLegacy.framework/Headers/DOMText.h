/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMCharacterData.h>

@class NSString;

@interface DOMText : DOMCharacterData

@property (copy, readonly) NSString *wholeText;

- (id)splitText:(unsigned int)arg1;
- (id)replaceWholeText:(id)arg1;

@end
