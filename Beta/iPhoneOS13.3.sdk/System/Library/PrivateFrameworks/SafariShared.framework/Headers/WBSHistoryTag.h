/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSHistoryTag : NSObject

{
    long long _databaseID;
    NSString *_title;
    NSString *_identifier;
    double _modificationTimestamp;
    long long _level;
}

@property (nonatomic, readonly) long long databaseID;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double modificationTimestamp;
@property (nonatomic, readonly) long long level;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5;

@end
