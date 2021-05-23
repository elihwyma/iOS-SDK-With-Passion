/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EKSerializableObject : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)classesForKey;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
