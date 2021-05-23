/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPCacheAsset : NSObject

{
    NSString *_key;
    unsigned long long _state;
    unsigned long long _size;
    double _accessDate;
}

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double accessDate;

+ (id)toProto:(id)arg1;
+ (id)fromProto:(id)arg1;

- (id)initWithName:(id)arg1 size:(unsigned long long)arg2 state:(unsigned long long)arg3 accessDate:(id)arg4;

@end
