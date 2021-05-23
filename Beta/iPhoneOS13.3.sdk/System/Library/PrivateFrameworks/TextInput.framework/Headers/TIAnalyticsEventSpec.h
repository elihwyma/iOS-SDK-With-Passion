/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TIAnalyticsEventSpec : NSObject

{
    _Bool _isInputModeRequired;
    NSString *_name;
    NSArray *_fieldSpecs;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool isInputModeRequired;
@property (nonatomic, readonly) NSArray *fieldSpecs;

+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(_Bool)arg2 fieldSpecs:(id)arg3;
+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(_Bool)arg2;

- (id)initWithName:(id)arg1 inputModeRequired:(_Bool)arg2 fieldSpecs:(id)arg3;

@end
