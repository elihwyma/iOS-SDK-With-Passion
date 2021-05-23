/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@interface TSUWeakReference : NSObject

{
    id mObject;
}

@property (nonatomic, readonly) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end
