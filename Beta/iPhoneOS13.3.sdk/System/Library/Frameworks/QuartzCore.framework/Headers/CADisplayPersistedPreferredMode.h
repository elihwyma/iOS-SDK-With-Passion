/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPersistedPreferredMode : NSObject

{
    NSString *_uuid;
    NSDictionary *_mode;
}

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *mode;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
