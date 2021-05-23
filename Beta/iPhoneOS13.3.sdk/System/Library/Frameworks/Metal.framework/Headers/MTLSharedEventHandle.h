/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLSharedEventHandle : NSObject

{
    struct MTLSharedEventHandlePrivate *_priv;
}

@property (readonly) NSString *label;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)eventPort;
- (unsigned long long)labelTraceID;
- (id)initWithSharedEvent:(id)arg1;

@end
