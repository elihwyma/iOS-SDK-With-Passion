/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class _MPUHTMLDefaultDelegate;

@protocol MPUHTMLParserDelegate;

@interface MPUHTMLParser : NSObject

{
    _MPUHTMLDefaultDelegate *_defaultDelegate;
    id <MPUHTMLParserDelegate> _delegate;
}

@property (weak, nonatomic) id <MPUHTMLParserDelegate> delegate;

+ (id)parser;
+ (id)sanitizedHTMLString:(id)arg1;
+ (id)displayDelegateWithDefaultAttributes:(id)arg1;
+ (id)attributedSanitizedStringFromHTMLString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)parserWithDefaultAttributes:(id)arg1;

- (id)attributedStringForHTMLString:(id)arg1 error:(id *)arg2;

@end
