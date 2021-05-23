/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADFilter.h>

@class NSArray;

@interface CADCompoundFilter : CADFilter

{
    NSArray *_filters;
    long long _operation;
}

@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) long long operation;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validate;
- (id)initWithFilters:(id)arg1 operation:(long long)arg2;
- (_Bool)applicableToEntityType:(int)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;

@end
