/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@interface ASSettingsTaskGetterResult : NSObject

{
    int _key;
    long long _status;
    id _result;
}

@property (nonatomic) int key;
@property (nonatomic) long long status;
@property (retain, nonatomic) id result;

- (id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3;

@end
