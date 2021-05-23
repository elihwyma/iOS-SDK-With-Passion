/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXEventData : NSObject

{
    struct _AXEventDataStorage _storage;
}

@property (nonatomic, readonly) long long eventSenderIdentifier;
@property (nonatomic, readonly) _Bool wasPostedByAccessibility;
@property (nonatomic, readonly) char *dataBytes;
@property (nonatomic, readonly) long long dataLength;

+ (id)dataWithBytes:(char *)arg1 length:(long long)arg2;
+ (id)dataWithSender:(long long)arg1;

- (id)init;
- (id)description;

@end
