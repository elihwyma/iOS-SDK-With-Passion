/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface STGenericIntentGroup : NSObject

{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
