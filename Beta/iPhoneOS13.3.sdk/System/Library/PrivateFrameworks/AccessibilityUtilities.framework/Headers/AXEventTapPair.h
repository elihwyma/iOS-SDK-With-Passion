/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXEventTapPair : NSObject

{
    int priority;
    int _type;
    CDUnknownBlockType handler;
    NSString *identifier;
    struct __IOHIDEventSystemClient *_systemClient;
    CDUnknownBlockType _matchingServiceHandler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic) int type;
@property (retain, nonatomic) struct __IOHIDEventSystemClient *systemClient;
@property (copy, nonatomic) CDUnknownBlockType matchingServiceHandler;

- (void)dealloc;
- (id)description;

@end
