/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <Swift>

{
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSDictionary *attributesAsDictionary;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)close;
- (_Bool)hasAttributes;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (void)writeAttributes:(id)arg1;
- (id)initWithXMLAttributes:(id)arg1;

@end
