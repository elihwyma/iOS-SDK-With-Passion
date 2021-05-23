/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/Swift-Protocol.h>

@class NSTextRange;

@protocol NSTextElementProvider <Swift>

@property (readonly) NSTextRange *documentRange;

- (unsigned short)enumerateTextElementsFromLocation:options:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceCharactersInRange:withTextElements: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeToBackingStore: /* Error: Ran out of types for this method. */;

@end
