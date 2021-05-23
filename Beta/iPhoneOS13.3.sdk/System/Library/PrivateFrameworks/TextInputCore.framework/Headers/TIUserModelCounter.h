/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface TIUserModelCounter : NSObject

{
    unsigned long long _persisted;
    unsigned long long _current;
    NSString *_name;
    NSDate *_creationDate;
    NSDate *_lastUpdateDate;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *lastUpdateDate;

- (id)initWithName:(id)arg1;
- (void)add:(int)arg1;
- (id)initWithName:(id)arg1 initialCount:(id)arg2 creationDate:(id)arg3 lastUpdateDate:(id)arg4;
- (void)doPersist:(id)arg1 forDate:(id)arg2;

@end
