/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface TIUserModelDataStoreDurableEntry : NSObject

{
    NSDate *_creationDate;
    NSDate *_lastUpdateDate;
    NSString *_key;
    NSNumber *_value;
}

@property (readonly) NSDate *creationDate;
@property (readonly) NSDate *lastUpdateDate;
@property (readonly) NSString *key;
@property (readonly) NSNumber *value;

- (id)initWithCreationDate:(id)arg1 withLastUpdateDate:(id)arg2 withKey:(id)arg3 withValue:(id)arg4;

@end
