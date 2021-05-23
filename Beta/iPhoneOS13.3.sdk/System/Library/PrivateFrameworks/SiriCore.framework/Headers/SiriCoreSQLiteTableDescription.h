/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

#import <SiriCore/Swift-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSQLiteTableDescription : NSObject <Swift>

{
    NSString *_name;
    NSArray *_columns;
    NSArray *_constraints;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *columns;
@property (copy, nonatomic, readonly) NSArray *constraints;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3;
- (id)initWithName:(id)arg1 columnsProvider:(CDUnknownBlockType)arg2 constraintsProvider:(CDUnknownBlockType)arg3;

@end
