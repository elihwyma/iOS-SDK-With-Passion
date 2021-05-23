/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@interface CADFilter : NSObject

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validate;
- (_Bool)applicableToEntityType:(int)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;

@end
