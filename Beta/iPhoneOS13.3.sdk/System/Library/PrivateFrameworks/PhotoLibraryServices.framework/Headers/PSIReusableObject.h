/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PSIReusableObject : NSObject

{
    _Bool _isPreparedForReuse;
    _Bool _isPreparingFromStatement;
    _Bool _isPreparedFromStatement;
}

@property (nonatomic, readonly) _Bool isPreparedFromStatement;

- (id)init;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (void)didPrepareFromStatement:(struct sqlite3_stmt *)arg1;

@end
