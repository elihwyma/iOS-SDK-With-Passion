/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSPDNSQuery : NSObject

{
    NSString *_name;
    long long _recordType;
    long long _recordClass;
}

@property (readonly) NSString *name;
@property (readonly) long long recordType;
@property (readonly) long long recordClass;

- (id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3;
- (id)copyStateDictionary;

@end
