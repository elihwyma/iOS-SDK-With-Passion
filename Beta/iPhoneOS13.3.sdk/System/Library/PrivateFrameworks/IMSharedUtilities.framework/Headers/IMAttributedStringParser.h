/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject

{
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;

- (void)parseContext:(id)arg1;
- (void)_preprocessWithContext:(id)arg1 string:(id *)arg2;

@end
