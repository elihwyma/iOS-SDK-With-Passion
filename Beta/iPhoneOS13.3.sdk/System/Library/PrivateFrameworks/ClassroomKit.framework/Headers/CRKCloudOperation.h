/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CKDatabase;

@interface CRKCloudOperation : CATOperation

{
    CKDatabase *_database;
}

@property (nonatomic, readonly) CKDatabase *database;

+ (id)new;

- (id)init;
- (_Bool)isAsynchronous;
- (id)initWithDatabase:(id)arg1;

@end
