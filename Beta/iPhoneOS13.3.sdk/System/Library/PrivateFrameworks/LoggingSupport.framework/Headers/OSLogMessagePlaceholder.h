/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface OSLogMessagePlaceholder : NSObject

{
    struct os_log_fmt_cspec_s *_placeholder;
    NSString *_placeholderString;
    NSArray *_placeholderTokens;
}

@property (nonatomic, readonly) NSString *rawString;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) NSString *typeNamespace;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int precision;

- (void)dealloc;
- (id)initWithPlaceholderStruct:(struct os_log_fmt_cspec_s *)arg1;

@end
