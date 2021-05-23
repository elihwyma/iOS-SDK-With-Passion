/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject

{
    unsigned short _notifyStatus;
    NSData *_notifyData;
}

@property (nonatomic) unsigned short notifyStatus;
@property (retain, nonatomic) NSData *notifyData;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2;

@end
