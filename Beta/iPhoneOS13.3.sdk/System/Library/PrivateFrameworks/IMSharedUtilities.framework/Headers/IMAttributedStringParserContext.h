/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString;

@interface IMAttributedStringParserContext : NSObject

{
    NSAttributedString *_inString;
}

@property (retain, readonly) NSAttributedString *inString;
@property (retain, readonly) NSString *name;
@property (retain, readonly) NSArray *resultsForLogging;
@property (readonly) _Bool shouldPreprocess;

- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (void)parserDidStart:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(struct _NSRange)arg3;
- (void)parserDidEnd:(id)arg1;

@end
