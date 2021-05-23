/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject

{
    int _pid;
    unsigned int _contextID;
    NSString *_clientID;
    NSString *_displayUUID;
}

@property (copy, nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) int pid;
@property (copy, nonatomic, readonly) NSString *displayUUID;
@property (nonatomic, readonly) unsigned int contextID;

+ (_Bool)supportsSecureCoding;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
+ (id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPid:(int)arg1;
- (id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
- (id)conciseDescription;
- (_Bool)isEqualNotIncludingClientIDAndPid:(id)arg1;
- (id)propertiesOneLevelMoreGeneric;

@end
