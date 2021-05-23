/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface WBWebsiteDataRecord : NSObject

{
    NSString *_domain;
    unsigned long long _usage;
}

@property (copy, nonatomic, readonly) NSObject<OS_xpc_object> *XPCDictionaryRepresentation;
@property (copy, nonatomic, readonly) NSString *domain;
@property (nonatomic) unsigned long long usage;

+ (id)websiteDataRecordWithDomain:(id)arg1;
+ (id)websiteDataRecordFromXPCDictionary:(id)arg1;

- (id)_initWithDomain:(id)arg1;
- (id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2;

@end
