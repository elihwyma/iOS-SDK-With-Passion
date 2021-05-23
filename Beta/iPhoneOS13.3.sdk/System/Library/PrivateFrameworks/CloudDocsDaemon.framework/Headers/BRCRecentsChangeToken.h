/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCRecentsChangeToken : NSObject

{
    unsigned long long _notifRank;
    unsigned long long _databaseID;
}

@property (nonatomic) unsigned long long notifRank;
@property (nonatomic) unsigned long long databaseID;

+ (_Bool)supportsSecureCoding;
+ (id)changeTokenFromData:(id)arg1;

- (id)description;
- (id)toData;

@end
