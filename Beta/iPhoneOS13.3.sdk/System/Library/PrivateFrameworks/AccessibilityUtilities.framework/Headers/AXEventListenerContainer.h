/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXEventListenerContainer : NSObject

{
    CDUnknownBlockType handler;
    NSString *identifier;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) NSString *identifier;

@end
