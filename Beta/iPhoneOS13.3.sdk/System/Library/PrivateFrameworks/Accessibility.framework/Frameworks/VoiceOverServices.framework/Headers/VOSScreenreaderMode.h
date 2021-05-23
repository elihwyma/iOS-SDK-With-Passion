/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VOSScreenreaderMode : NSObject

{
    NSString *_rawValue;
}

@property (nonatomic, readonly) NSString *rawValue;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)allModes;
+ (id)Invalid;
+ (id)Default;
+ (id)Handwriting;
+ (id)BrailleScreenInput;
+ (id)modeWithStringValue:(id)arg1;

- (id)description;
- (id)_initWithRawValue:(id)arg1;

@end
