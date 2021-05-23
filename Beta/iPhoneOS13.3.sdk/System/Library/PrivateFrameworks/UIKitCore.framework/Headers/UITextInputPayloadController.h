/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol UITextInputPayloadDelegate;

@interface UITextInputPayloadController : NSObject

{
    NSArray *_supportedPayloadIds;
    id <UITextInputPayloadDelegate> _payloadDelegate;
}

@property (copy, nonatomic) NSArray *supportedPayloadIds;
@property (nonatomic) id <UITextInputPayloadDelegate> payloadDelegate;

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (void)dealloc;

@end
