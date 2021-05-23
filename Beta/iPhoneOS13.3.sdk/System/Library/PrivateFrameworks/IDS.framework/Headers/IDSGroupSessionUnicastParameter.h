/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString;

@interface IDSGroupSessionUnicastParameter : NSObject

{
    NSString *_groupSessionID;
    unsigned long long _participantID;
    unsigned long long _connectionIndex;
    long long _dataMode;
}

@property (nonatomic, readonly) NSString *groupSessionID;
@property (nonatomic, readonly) unsigned long long participantID;
@property (nonatomic, readonly) unsigned long long connectionIndex;
@property (nonatomic, readonly) long long dataMode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupSessionID:(id)arg1 participantID:(unsigned long long)arg2 dataMode:(long long)arg3 connectionIndex:(unsigned long long)arg4;

@end
