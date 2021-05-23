/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEDNSResourceRecord : NSObject

{
    long long _type;
    NSString *_name;
    long long _recordClass;
    unsigned long long _timeToLive;
    unsigned long long _dataLength;
    NSString *_resourceString;
}

@property (readonly) long long type;
@property (readonly) NSString *name;
@property (readonly) long long recordClass;
@property (readonly) unsigned long long timeToLive;
@property (readonly) unsigned long long dataLength;
@property (readonly) NSString *resourceString;

+ (id)typeToString:(long long)arg1;

- (id)initFromByteParser:(id)arg1;

@end
