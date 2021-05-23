/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _RCUIViewNamedConstraints : NSObject

{
    NSString *_name;
    NSArray *_constraints;
    id _stalenessToken;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *constraints;
@property (copy, nonatomic, readonly) id stalenessToken;

- (id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3;

@end
