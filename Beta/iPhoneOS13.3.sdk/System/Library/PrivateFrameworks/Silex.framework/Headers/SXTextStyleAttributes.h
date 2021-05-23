/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface SXTextStyleAttributes : NSObject <Swift>

{
    NSMutableDictionary *_mutableAttributes;
    struct _NSRange _range;
}

@property (nonatomic, readonly) NSMutableDictionary *mutableAttributes;
@property (nonatomic, readonly) struct _NSRange range;
@property (nonatomic, readonly) NSDictionary *attributes;

+ (id)attributesWithRange:(struct _NSRange)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (void)addAttribute:(id)arg1 value:(id)arg2;

@end
