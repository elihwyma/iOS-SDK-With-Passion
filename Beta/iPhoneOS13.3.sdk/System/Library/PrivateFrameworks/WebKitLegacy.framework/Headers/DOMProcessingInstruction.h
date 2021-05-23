/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMCharacterData.h>

@class DOMStyleSheet, NSString;

@interface DOMProcessingInstruction : DOMCharacterData

@property (copy, readonly) NSString *target;
@property (readonly) DOMStyleSheet *sheet;

@end
