/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@interface BKSTouchDeliveryUpdate : NSObject

{
    _Bool _isDetached;
    unsigned int _touchIdentifier;
    unsigned int _contextID;
    int _pid;
    long long _type;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) _Bool isDetached;
@property (nonatomic) unsigned int contextID;
@property (nonatomic) int pid;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
