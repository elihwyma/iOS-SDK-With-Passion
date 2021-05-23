/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSWPTextSource <Swift>

- (unsigned short)string;
- (unsigned short)length;
- (unsigned short)characterAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)getCharacters:range: /* Error: Ran out of types for this method. */;
- (unsigned short)wordAtCharIndex:includePreviousWord: /* Error: Ran out of types for this method. */;
- (unsigned short)characterStyleAtCharIndex:effectiveRange: /* Error: Ran out of types for this method. */;
- (unsigned short)paragraphStyleAtCharIndex:effectiveRange: /* Error: Ran out of types for this method. */;
- (unsigned short)isWritingDirectionRightToLeftForParagraphAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)attributesAtCharIndex:attributesOfInterest:attributesTable:effectiveRange: /* Error: Ran out of types for this method. */;
- (unsigned short)storageLength;
- (unsigned short)adjustRangesByDelta: /* Error: Ran out of types for this method. */;
- (unsigned short)hasColumnBreakAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)hasColumnStyleForParagraphBreakAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)filteredCoreTextAttributesFontScaleEffectiveRange:filterDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)createFilteredCoreTextAttributes:effectiveRange:filterDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)smartFieldAtCharIndex:attributeKind:effectiveRange: /* Error: Ran out of types for this method. */;
- (unsigned short)smartFieldsWithAttributeKind:intersectingRange: /* Error: Ran out of types for this method. */;
- (unsigned short)footnoteReferenceAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)attachmentAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)attachmentOrFootnoteAtCharIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)objectAtLocationPriorToMappedCharIndex:forAttributeKind:effectiveRange: /* Error: Ran out of types for this method. */;
- (unsigned short)charIndexMappedToStorage: /* Error: Ran out of types for this method. */;
- (unsigned short)charIndexMappedFromStorage: /* Error: Ran out of types for this method. */;
- (unsigned short)charRangeMappedToStorage: /* Error: Ran out of types for this method. */;
- (unsigned short)charRangeMappedFromStorage: /* Error: Ran out of types for this method. */;
- (unsigned short)hyphenationLocationBeforeIndex:inRange:locale:hyphenChar: /* Error: Ran out of types for this method. */;
- (unsigned short)charIndexRemappedFromStorage: /* Error: Ran out of types for this method. */;

@end
