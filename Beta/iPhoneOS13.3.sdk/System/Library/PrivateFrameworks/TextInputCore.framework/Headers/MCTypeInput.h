/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/MCKeyboardInput.h>

@class NSArray, NSString;

@interface MCTypeInput : MCKeyboardInput

{
    NSString *_characters;
    NSArray *_nearbyKeys;
}

@property (copy, nonatomic, readonly) NSString *characters;
@property (copy, nonatomic, readonly) NSArray *nearbyKeys;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canComposeNew:(id)arg1;
- (id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2;

@end
