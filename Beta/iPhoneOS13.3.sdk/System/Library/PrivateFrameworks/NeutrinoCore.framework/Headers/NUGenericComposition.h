/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUComposition.h>

@class NSDictionary, NSMutableDictionary;

@interface NUGenericComposition : NUComposition

{
    NSMutableDictionary *_contents;
}

@property (copy, nonatomic) NSDictionary *contents;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithCompositionSchema:(id)arg1;

@end
