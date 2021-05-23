/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void)track;
- (id)propertyNames;
- (Class)codableEventClass;
- (id)serializableEvent;
- (void)trackWithCount:(int)arg1;

@end
