/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBImageNoteContent, _INPBTextNoteContent;

@protocol _INPBNoteContent <Swift>

@property (retain, nonatomic) _INPBImageNoteContent *image;
@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) _INPBTextNoteContent *text;
@property (nonatomic, readonly) _Bool hasText;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;

@end
