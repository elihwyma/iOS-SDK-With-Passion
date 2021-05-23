/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject

{
    NSString *_name;
    _SYSharedServiceDB *_db;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) _SYSharedServiceDB *db;

- (id)initWithServiceName:(id)arg1;

@end
