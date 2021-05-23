/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCKRecordFieldSchema : NSObject

{
    _Bool _isEncrypted;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool isEncrypted;

+ (id)fieldWithName:(id)arg1 isEncrypted:(_Bool)arg2;

- (id)init;
- (id)initWithFieldName:(id)arg1 isEncrypted:(_Bool)arg2;

@end
