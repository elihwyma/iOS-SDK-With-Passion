/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXSpringBoardActionHandlerHolder : NSObject

{
    CDUnknownBlockType _handler;
    long long _type;
    NSString *_identifier;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;

@end
