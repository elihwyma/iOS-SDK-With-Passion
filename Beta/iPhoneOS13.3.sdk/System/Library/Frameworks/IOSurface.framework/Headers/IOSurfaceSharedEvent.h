/*
 Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

#import <Foundation/NSObject.h>

@interface IOSurfaceSharedEvent : NSObject

{
    unsigned int _eventPort;
    unsigned long long _globalTraceObjectID;
}

@property unsigned long long signaledValue;
@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;

@end
