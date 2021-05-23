/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

#import <SiriCore/Swift-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSQLiteColumnDescription : NSObject <Swift>

{
    NSString *_name;
    NSString *_type;
    NSArray *_constraints;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSArray *constraints;

+ (id)integerPrimaryKeyColumnWithName:(id)arg1;
+ (id)uniqueTextColumnWithName:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 constraints:(id)arg3;
- (id)initWithName:(id)arg1 type:(id)arg2 constraintsProvider:(CDUnknownBlockType)arg3;

@end
