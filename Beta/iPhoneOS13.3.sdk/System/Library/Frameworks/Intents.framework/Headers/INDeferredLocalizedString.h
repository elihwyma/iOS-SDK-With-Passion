/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSString.h>

@class NSArray, NSURL;

@interface INDeferredLocalizedString : NSString

{
    NSString *_formatKey;
    NSString *_table;
    NSArray *_arguments;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_cachedLocalization;
}

@property (copy, nonatomic, readonly) NSString *_formatKey;
@property (copy, nonatomic, readonly) NSString *_table;
@property (copy, nonatomic, readonly) NSArray *_arguments;
@property (copy, nonatomic, readonly) NSString *_bundleIdentifier;
@property (copy, nonatomic, readonly) NSURL *_bundleURL;
@property (copy, nonatomic, readonly) NSString *_cachedLocalization;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (unsigned long long)length;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3 arguments:(char *)arg4;
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundleIdentifier:(id)arg3 bundleURL:(id)arg4 arguments:(id)arg5;
- (id)localizeForLanguage:(id)arg1;
- (id)_intents_encodeForProto;

@end
