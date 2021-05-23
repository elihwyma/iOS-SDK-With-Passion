/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface WPXMLRPCDataCleaner : NSObject

{
    NSData *xmlData;
}

- (id)initWithData:(id)arg1;
- (id)cleanData;
- (id)cleanClosingTagIfNeeded:(id)arg1 lengthOfCharactersPrecedingPreamble:(long long)arg2;
- (id)cleanWithTidyIfPresent:(id)arg1;
- (id)cleanInvalidXMLCharacters:(id)arg1;
- (id)cleanCharactersBeforePreamble:(id)arg1;
- (id)cleanInvalidUTF8:(id)arg1;
- (id)cloingTagsForString:(id)arg1;
- (id)repairTruncatedClosingTags:(id)arg1 inResponseString:(id)arg2;
- (id)appendClosingTags:(id)arg1 toResponseString:(id)arg2;
- (struct _NSRange)rangeOfLastValidClosingTagInString:(id)arg1;

@end
