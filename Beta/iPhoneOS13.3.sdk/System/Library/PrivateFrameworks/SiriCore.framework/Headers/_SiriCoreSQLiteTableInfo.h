/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _SiriCoreSQLiteTableInfo : NSObject

{
    NSString *_name;
    NSArray *_columns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *columns;

- (id)initWithName:(id)arg1 columns:(id)arg2;

@end
