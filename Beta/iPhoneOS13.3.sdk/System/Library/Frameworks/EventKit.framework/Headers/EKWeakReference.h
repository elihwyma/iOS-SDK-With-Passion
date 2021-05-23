/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EKWeakReference : NSObject

{
    id _value;
}

@property (weak, nonatomic) id value;

- (id)initWithValue:(id)arg1;

@end
