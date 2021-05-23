/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@interface _WKTextInputContext : NSObject

{
    struct TextInputContext _textInputContext;
}

@property (nonatomic, readonly) struct CGRect boundingRect;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (const struct TextInputContext *)_textInputContext;
- (id)_initWithTextInputContext:(const struct TextInputContext *)arg1;

@end
