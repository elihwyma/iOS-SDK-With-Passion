/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AUAudioUnitProperty : NSObject

{
    NSString *_key;
    unsigned int _scope;
    unsigned int _element;
}

+ (_Bool)supportsSecureCoding;
+ (id)propertyWithKey:(id)arg1;
+ (id)propertyWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;

@end
