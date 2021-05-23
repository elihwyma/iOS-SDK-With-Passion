/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface REDuetContextDevice : NSObject

{
    NSUUID *_identifier;
    unsigned long long _deviceType;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long deviceType;

+ (id)localDevice;
+ (id)companionDevice;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2;

@end
