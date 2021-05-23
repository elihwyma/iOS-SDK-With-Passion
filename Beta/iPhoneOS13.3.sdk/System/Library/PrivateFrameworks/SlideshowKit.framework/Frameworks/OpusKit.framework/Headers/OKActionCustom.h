/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@class NSDictionary, NSString;

@interface OKActionCustom : OKAction

{
    NSString *_name;
    NSDictionary *_attributes;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *attributes;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)customActionWithName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
