/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSCommnatMessage : NSObject

{
    unsigned long long _type;
    unsigned int _nonce;
    struct sockaddr_storage _local;
    struct sockaddr_storage _external;
    unsigned long long _status;
    double _startTime;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int nonce;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double startTime;

- (const struct sockaddr *)external;
- (const struct sockaddr *)local;
- (_Bool)write:(char *)arg1 outputLength:(int *)arg2;
- (_Bool)read:(char *)arg1 inputLength:(int)arg2;
- (id)initWithType:(unsigned long long)arg1 localAddress:(struct sockaddr *)arg2;

@end
