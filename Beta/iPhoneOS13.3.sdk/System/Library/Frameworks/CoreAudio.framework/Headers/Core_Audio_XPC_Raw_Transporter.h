/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface Core_Audio_XPC_Raw_Transporter : NSObject

{
    NSObject<OS_xpc_object> *_object;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;

+ (_Bool)supportsSecureCoding;
+ (id)object:(id)arg1;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
