/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AUAudioUnitPreset : NSObject

{
    long long _number;
    NSString *_name;
}

@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
