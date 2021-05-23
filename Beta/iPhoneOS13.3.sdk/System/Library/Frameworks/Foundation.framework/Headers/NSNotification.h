/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface NSNotification : NSObject <Swift>

@property (copy, readonly) NSString *name;
@property (retain, readonly) id object;
@property (copy, readonly) NSDictionary *userInfo;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)notificationWithName:(id)arg1 object:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

@end
