/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface MSCMSSMIMECapabilitiesAttribute : NSObject

{
    NSSet *_capabilities;
}

@property (readonly) NSSet *capabilities;

- (id)init;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end
