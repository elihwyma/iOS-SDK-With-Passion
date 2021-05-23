/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

#import <SiriCore/Swift-Protocol.h>

@class NSString;

@protocol SiriCoreSQLiteValue;

@interface SiriCoreSQLiteColumnConstraint : NSObject <Swift>

{
    NSString *_name;
    long long _type;
    id <SiriCoreSQLiteValue> _value;
    unsigned long long _options;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) id <SiriCoreSQLiteValue> value;
@property (nonatomic, readonly) unsigned long long options;

+ (id)primaryKeyColumnConstraintWithName:(id)arg1 usesAutoIncrement:(_Bool)arg2;
+ (id)notNullColumnConstraintWithName:(id)arg1;
+ (id)uniqueColumnConstraintWithName:(id)arg1;
+ (id)defaultColumnConstraintWithName:(id)arg1 value:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 value:(id)arg3 options:(unsigned long long)arg4;

@end
