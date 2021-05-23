/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMTag.h>

@class NSString;

@interface AXMReplacementTag : AXMTag

{
    NSString *_overrideSpeakableText;
    struct _NSRange _overrideRange;
}

+ (id)replacementTagWithSpeakableText:(id)arg1 range:(struct _NSRange)arg2;

- (struct _NSRange)range;
- (id)originalText;
- (id)speakableText;

@end
