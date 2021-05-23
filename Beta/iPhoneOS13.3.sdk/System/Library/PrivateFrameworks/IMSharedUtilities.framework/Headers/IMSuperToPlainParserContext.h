/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext

{
    NSMutableString *_plainString;
    _Bool _extractLinks;
    NSMutableString *_mutablePlainString;
}

@property (nonatomic, readonly) NSString *plainString;
@property (nonatomic, readonly) NSMutableString *mutablePlainString;

- (void)dealloc;
- (id)name;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 extractLinks:(_Bool)arg2;
- (id)resultsForLogging;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;

@end
